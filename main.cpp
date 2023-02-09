#include <stdio.h>

void fun1(int n){
    printf("d%",n);
    fun1(n-1);
}
void fun2(int n){
    printf("d%",n);
    fun2(n-1);
}

int main(){
    fun1(3);
    
}