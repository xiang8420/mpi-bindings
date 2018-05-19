# Impala MPI bindings

So far this is only rudimentary. If you have need of more bindings, please add them and contribute any nicer wrappers you build.

# Build and run

Make sure impala and clang are on the PATH.

Change the MPIStatus struct in `src/mpi.impala` if you're not using OpenMPI.

    mkdir build
    cd build
    cmake .. -DAnyDSL-runtime_DIR:PATH=<add path to anydsl runtime here>/build/share/anydsl/cmake
    make

    mpirun -n 2 src/main
