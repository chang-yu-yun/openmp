#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <omp.h>

#define f(A) (4.0 / (1.0+(A)*(A)))
#define PAD  (8)

int main()
{
    int num_threads = 4;
    omp_set_num_threads(num_threads);
    double* buffer = malloc(sizeof(double) * PAD * num_threads);

    // declarations
    const int n = 10000000;
    int i, range;
    double w, x, sum, pi, fx;
    clock_t t1, t2;
    struct timeval tv1, tv2;
    struct timezone tz;
    double wt1, wt2;

    gettimeofday(&tv1, &tz);
    wt1 = omp_get_wtime();
    t1 = clock();

    /* calculate pi = integral [0..1] 4/(1+x**2) dx */
    range = n / num_threads;
    w = 1.0 / n;
    sum = 0.0;
    #pragma omp parallel private(i, x)
    {
        int tid = omp_get_thread_num();
        int start = tid * range;
        int end = tid == (num_threads-1) ? n : (tid+1) * range;
        buffer[tid*PAD] = 0.0;
        for (i = start+1; i <= end; i++) {
            double curr = w * ((double)i-0.5);
            buffer[tid*PAD] = buffer[tid*PAD] + f(curr);
        }
    }
    for (int i = 0; i < num_threads; i++) {
        sum = sum + buffer[i*PAD];
    }
    pi = w * sum;
    
    t2 = clock();
    wt2 = omp_get_wtime();
    gettimeofday(&tv2, &tz);
    printf("Computed pi = %24.16g\n", pi);
    printf("CPU time (clock)                = %12.4g sec\n", (double)(t2-t1) / CLOCKS_PER_SEC);
    printf("Wall clock time (omp_get_wtime) = %12.4g sec\n", wt2 - wt1);
    printf("Wall clock time (gettimeofday)  = %12.4g sec\n", (tv2.tv_sec-tv1.tv_sec) + (tv2.tv_usec-tv1.tv_usec)*1e-6);
}
