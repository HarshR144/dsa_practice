#include<iostream>
using namespace std;

class Stack{
int size=0;
int top =-1;
int *p;

public:
    Stack(){
        size = 10;
        p = new int[size];
    }

    Stack(int s){
        size = s;
        p = new int[size];
    }
    ~Stack(){
        delete []p;
    }

    void push(int element);
    int pop();
    int peek(int element_posn);
    bool isEmpty();
    bool isFull();
    int StackTop();
};

void Stack::push(int element){
    if(top == size-1){
        cout<<"Stack is full.";
    }
    else{
        p[++top] = element;
    }
}

int Stack::pop(){
    int x = -1;
    if(top == -1){
        cout<<"Stack is empty.";
        return x;
    }
    else{
        x = p[top];
        top--;
        return x; 
    }
}


int Stack::peek(int element_posn){
    if(element_posn>0 && element_posn <= size){
        return p[top - element_posn +1];
    }
    else
        return -1;
    }

bool Stack::isFull(){
    if(top == size -1){
        return true;
    }
    else
        return false;

}

bool Stack::isEmpty(){
    if(top == -1){
        return true;
    }
    else
        return false;

}

 int Stack::StackTop(){
    if (top != -1)
    {
        return p[top];
    }
    else
        return -1;
 }



int main()
{
    Stack s1(5);
    cout<<"is empty: "<<s1.isEmpty()<<endl;
    cout<<"Is Full: "<<s1.isFull()<<endl;
    s1.push(1);
    s1.push(2);
    s1.push(4);
    cout<<s1.peek(1)<<endl;   
    cout<<s1.peek(2)<<endl;
    cout<<s1.peek(3)<<endl;

    s1.pop();
    cout<<s1.peek(1)<<endl;


}