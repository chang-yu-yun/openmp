# OpenMP Practice
1. Calculation of Pi (`pi.c`)
   - Serial version
     ```
     Computed pi =        3.141592653589731
     CPU time (clock)                =       0.1088 sec
     Wall clock time (omp_get_wtime) =       0.1089 sec
     Wall clock time (gettimeofday)  =       0.1089 sec
     ```
   - Parallel reduction
     ```
     Computed pi =         3.14159265358967
     CPU time (clock)                =      0.09336 sec
     Wall clock time (omp_get_wtime) =      0.02891 sec
     Wall clock time (gettimeofday)  =      0.02891 sec
     ```
   - `atomic` directive
     ```
     Computed pi =         3.14159265358977
     CPU time (clock)                =        2.552 sec
     Wall clock time (omp_get_wtime) =       0.6674 sec
     Wall clock time (gettimeofday)  =       0.6674 sec
     ```
   - `critical` directive
     ```
     Computed pi =        3.141592653589912
     CPU time (clock)                =        4.541 sec
     Wall clock time (omp_get_wtime) =        1.138 sec
     Wall clock time (gettimeofday)  =        1.138 sec
     ```
