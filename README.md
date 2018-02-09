# Build and run

Make sure impala and clang are on the PATH.

Change the MPIStatus struct in `src/mpi.impala` if you're not using OpenMPI.

    mkdir build
    cd build
    cmake .. -DAnyDSL-runtime_DIR:PATH=<add path to anydsl runtime here>
    make

    mpirun -n 2 src/main
