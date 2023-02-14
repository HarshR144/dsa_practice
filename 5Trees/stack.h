#include<iostream>
using namespace std;
#include"queue.h"

class Stack{
int size=0;
int top =-1;
Node **p;

public:
    Stack(){
        size = 30;
        p = new Node*[size];
    }

    Stack(int s){
        size = s;
        p = new Node*[size];
    }
    ~Stack(){
        delete []p;
    }

    void push(Node* element);
    Node* pop();
    bool isEmpty();
    bool isFull();
    };

void Stack::push(Node* element){
    if(top == size-1){
        cout<<"Stack is full.";
    }
    else{
        p[++top] = element;
    }
}

Node* Stack::pop(){
    Node* x = NULL;
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

 


