#include <iostream>
using namespace std;

void fun1(int i){
    if (i>0)
    {
    
    cout<<i<<endl;
    fun1(i-1);
    fun1(i-1);
    }
    

}
int main(){
    fun1(3);
}