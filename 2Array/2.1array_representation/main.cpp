#include <iostream>
using namespace std;

int main(){
/*
    //Methods of creating an array;
// M1
    int A[5];
    A[0]= 1;
    A[1]=2;
// M2
    int B[]={1,2,3,4,5};

// M3
    int C[5]={1,2,3};// ALL REMAINING SPACES ARE FILLED WITH 0
// m4
    int D[5]={0};
*/

// accesing elements in an array
    int A[]={1,2,3,4,5};

    cout<<A[0];
    A[1]=2;
// traversing through an array

for(size_t i =0;i<5;++i){
    cout<<A[i];
}

// or
for(int element: A){
    cout<<element;
}
}