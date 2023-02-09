
#include<iostream>
using namespace std;
#define size 10
int n;
template<class S>

void SelectionSort(S array[size])
{
    int i, j, min_idx;
    S temp;
    for(i=0;i<n-1;i++){
         min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[min_idx])
            min_idx=j;
        }
       
        temp=array[i];
        array[i]=array[min_idx];
        array[min_idx]=temp;
    }
    cout<<"Sorted array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<" "<<array[i]<<endl;
    }
}

int main()
{
    int A[size];
    float B[size];
    int i;
   
    cout<<"Enter total number of integer elements: "<<endl;
    cin>>n;
    cout<<"Enter integer elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    SelectionSort(A);
   
    cout<<"Enter total number of float elements: "<<endl;
    cin>>n;
    cout<<"Enter float elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>B[i];
    }
    SelectionSort(B);
   

}