#include "MPI_conf.h"
#include<iostream>
using namespace mpi;
int Init(int* argc, char ***argv){
    MPI_Init(argc, argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &mype);
    MPI_Comm_size(MPI_COMM_WORLD, &numpe);
    MPI_Get_processor_name(processor_name, &namelen);
    if(mype==0){
        test_num = 23123;
    }
    MPI_Bcast(&test_num, 1, MPI_INT, 0, MPI_COMM_WORLD);
    if(test_num!=23123){
        std::cout << "Failing MPI Initial test! Exiting..." << '\n';
        MPI_Abort(MPI_COMM_WORLD,ierror);
    }
    std::cout << "MPI Initial test passed..." << '\n';

}
int Final(void);