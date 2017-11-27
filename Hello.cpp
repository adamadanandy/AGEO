#include<iostream>
#include<vector>
#include<conio.h>
#include "include/mpi.h"
using namespace std;
using namespace mpi;
int main(int argc, char* argv[]){
    int mype, numpe;
    int namelen;
    int a;
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &mype);
    MPI_Comm_size(MPI_COMM_WORLD, &numpe);
    MPI_Get_processor_name(processor_name, &namelen);

    printf("Hello World! by MoreWindows\nProcess %d of %d on %s\n", mype, numpe, processor_name);
    if(mype==0){
        a = 1;
    }else{
        a = -2;
    }
    printf("a = %d in Proc %d\n", a, mype);
    MPI_Finalize();
    return 0;
}