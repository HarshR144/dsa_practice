#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;

};
class Stack{
    Node* top= NULL;
    public:
        void push(int element);
        int pop();
        int peek(int posn);
        int TopElement();
        bool isEmpty();
        bool isFull();
        void display();
};

void Stack::push(int element){
    Node* t = new Node;
    if (t ==NULL){
        cout<<"Node is full"<<endl; 
    }
    else{
        t->data = element;
        t->next = top;
        top = t;
    }
}


int Stack::pop(){
    Node* t = top;
    int x = -1;

    if(top ==NULL){
        cout<<"Node underflow"<<endl;
    }

    else{
        x = top->data;
        top = top->next;
        delete t;
    }
    return x;
}

void Stack::display(){
    Node* p;
    p = top;
    while(p){
        cout<<p->data<<endl;
        p = p->next;

    }
}


int Stack::peek(int posn){
    int x = -1;
    Node *t = top;
    for (size_t i = 0; t!=NULL && i < posn-1; i++)
    {
        t = t->next;
    }
    if (t != NULL){
    x = t->data;}
    return x;
}
int Stack::TopElement(){
    if(top)
    return top->data;
    return -1;
}
bool Stack::isEmpty(){
    return top ? false:true;
}
bool Stack::isFull(){
    Node* t =new Node;
    bool x = t?false:true;
    delete t;
    return x;
}


int main(){
 Stack st;
 st.push(10);
 st.push(20);
 st.push(30);
 st.display();
}