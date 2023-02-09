#include <iostream>
using namespace std;

int main(){
    int a[3][4] = {{1,2,3,4},{0,0,0,0},{1,1,1,1}};

    // pointer in stack arrays in heap
    int* p[3];
    p[0]=new int[4];
    p[1]=new int[4];
    p[2]=new int[4];
    
    //Dynamic 2d array
    int** q;
    q=new int* [3];
    q[0]=new int[4];
    q[1]=new int[4];
    q[2]=new int[4];
    

}