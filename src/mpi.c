#include <mpi.h>

int MPI_init() {
  int argc = 0;
  char** argv = 0;
  return MPI_Init(&argc, &argv);
}

MPI_Op get_mpi_max() { return MPI_MAX; }

MPI_Op get_mpi_sum() { return MPI_SUM; }

MPI_Datatype get_mpi_int() { return MPI_INT; }

MPI_Datatype get_mpi_double() { return MPI_DOUBLE; }

MPI_Comm get_mpi_comm_world() { return MPI_COMM_WORLD; }
