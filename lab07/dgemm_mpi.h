#ifndef DGEMM_MPI_H
#define DGEMM_MPI_H

#define MAIN_PROCESS 0

void naive_dgemm(int m, int n, int k, double *a, int lda, double *b, int ldb, double *c, int ldc);

void mpi_dgemm(int my_id, int num_processes, int m, int n, int k, 
               double *a, int lda, double *b, int ldb, double *c, int ldc);

#endif
