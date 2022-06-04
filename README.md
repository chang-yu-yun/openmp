# OpenMP Practice
- Calculation of Pi
  1. Serial version 
     ```
     Computed pi =        3.141592653589731
     CPU time (clock)                =       0.1088 sec
     Wall clock time (omp_get_wtime) =       0.1089 sec
     Wall clock time (gettimeofday)  =       0.1089 sec
     ```
  2. Parallel reduction
     ```
     Computed pi =         3.14159265358967
     CPU time (clock)                =      0.09336 sec
     Wall clock time (omp_get_wtime) =      0.02891 sec
     Wall clock time (gettimeofday)  =      0.02891 sec
     ```
  3. `atomic` directive
     ```
     Computed pi =         3.14159265358977
     CPU time (clock)                =        2.552 sec
     Wall clock time (omp_get_wtime) =       0.6674 sec
     Wall clock time (gettimeofday)  =       0.6674 sec
     ```
  4. `critical` directive
     ```
     Computed pi =        3.141592653589912
     CPU time (clock)                =        4.541 sec
     Wall clock time (omp_get_wtime) =        1.138 sec
     Wall clock time (gettimeofday)  =        1.138 sec
     ```
  5. SPMD
     ```
     Computed pi =         3.14159265358967
     CPU time (clock)                =        0.164 sec
     Wall clock time (omp_get_wtime) =      0.04525 sec
     Wall clock time (gettimeofday)  =      0.04525 sec
     ```
  6. SPMD padded (to eliminate false sharing)
     ```
     Computed pi =         3.14159265358967
     CPU time (clock)                =      0.09477 sec
     Wall clock time (omp_get_wtime) =      0.02871 sec
     Wall clock time (gettimeofday)  =      0.02871 sec
     ```
