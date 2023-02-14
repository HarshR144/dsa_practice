#include<iostream>
using namespace std;
typedef struct Node
{
 struct Node *lchild;
 int data;
 struct Node *rchild;
}Node;
class Queue
{
 int size;
 int front;
 int rear;
 Node **Q;
public:

Queue(int size)
{
 this->size=size;
 front=rear=0;
 Q = new Node *[size];
}
void enqueue(Node *x)
{
 if((rear+1)%size==front)
  cout<<"Queue is Full";
 else
 {
 rear=(rear+1)%size;
  Q[rear]=x;
 }
}
Node* dequeue()
{
 Node* x=NULL;
 
 if(front==rear)
 cout<<"Queue is Empty\n";
 else
 {
 front=(front+1)%size;
 x=Q[front];
 }
 return x;
}
int isEmpty()
{
 return front==rear;}
};





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

 


