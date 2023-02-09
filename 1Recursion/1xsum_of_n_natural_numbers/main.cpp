#include <iostream>
using namespace std;
int sum_of(int n)
{//static int sum =0;
    if (n>0){
       //  sum = sum+n;
       return sum_of(n-1)+n;

    }
    else { 
        return 0;}
    
}

int sum_of_formula( int n){
    return (n*(n+1)/2);
}

int sum_of_loop(int n){
    int sum = 0;
    while (n>0){
        sum = sum+ n;
        --n;
    }
    return sum;
    
}
int main(){
   cout<< sum_of(3);
}