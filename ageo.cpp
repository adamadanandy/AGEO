#include<iostream>
#include<vector>
#include<conio.h>
#include "include/mpi.h"
using namespace std;
using namespace mpi;
int main(int argc, char* argv[]){
    Init(&argc, &argv);

    Final();
    return 0;
}