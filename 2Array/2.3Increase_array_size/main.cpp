#include <iostream>
using namespace std;

int main(){


int *B= new int [5];
    for(size_t i = 0; i < 5; i++)
    {   int e;
    cout<<"Enter element "<<i<<endl;
        cin>>e;
        B[i]==e;
    }
// now you want to add more 5 numbers to array so we need to inc its size

int* C=new int [10];
for (size_t i = 0; i <5; i++)
{
    C[i]=B[i];
}
C[5]=10;
C[6]=20;
C[7]=50;
C[8]=110;
C[9]=-1;

delete []B;
B=C;
C=NULL;
}