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