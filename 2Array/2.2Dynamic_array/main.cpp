#include <iostream>
using namespace std;

int main(){
    // static array
    //  int C[5]={1,2,3};
    
    //dynamic array
    int n;
    cin>>n;
    int *A= new int [n];
    for (size_t i = 0; i < n; i++)
    {   int e;
    cout<<"Enter element "<<i<<endl;
        cin>>e;
        A[i]==e;
    }


    // M2
    int *B= new int [5];
    for (size_t i = 0; i < 5; i++)
    {   int e;
    cout<<"Enter element "<<i<<endl;
        cin>>e;
        B[i]==e;}
    



}