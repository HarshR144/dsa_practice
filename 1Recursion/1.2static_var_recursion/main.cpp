#include <stdio.h>

int fun1(int n){
    if(n>0){
        return fun1(n-1) + n;
}
return 0;
}


int fun2(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun2(n-1) + x;
}
return 0;
}
int main()
{
    int a =fun1(5);
int b =fun2(5);
    printf("%d\n", a);
    printf("%d",b);

}