#pragma once
#include"include/mpi.h"
namespace mpi
{
int mype, numpe;
int namelen;
char processor_name[MPI_MAX_PROCESSOR_NAME];
int test_num,ierror;
int Init(int* argc, char ***argv);
int Final(void);
}