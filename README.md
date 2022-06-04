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
     Computed pi =        3.141592653589683
     CPU time (clock)                =        2.258 sec
     Wall clock time (omp_get_wtime) =       0.5856 sec
     Wall clock time (gettimeofday)  =       0.5856 sec
     ```
  4. `critical` directive
     ```
     Computed pi =        3.141592653589761
     CPU time (clock)                =        1.774 sec
     Wall clock time (omp_get_wtime) =       0.5224 sec
     Wall clock time (gettimeofday)  =       0.5224 sec
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
