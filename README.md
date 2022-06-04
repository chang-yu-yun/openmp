# OpenMP Practice
1. Calculation of Pi
   - Serial version
     ```
     computed pi =        3.141592653589731
     CPU time (clock)                =       0.1088 sec
     wall clock time (omp_get_wtime) =       0.1089 sec
     wall clock time (gettimeofday)  =       0.1089 sec
     ```
   - Parallel version using reduction
     ```
     computed pi =         3.14159265358967
     CPU time (clock)                =      0.09336 sec
     wall clock time (omp_get_wtime) =      0.02891 sec
     wall clock time (gettimeofday)  =      0.02891 sec
     ```
