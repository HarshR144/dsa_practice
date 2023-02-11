#include<iostream>
#include<string>
#include"queue.h"
using namespace std;

class Tree{
    Node * Root;
    public:
    Tree(){
        Root =NULL;
    }

    void create_tree(){
        Queue q(20);
        int x;
        Node *t,*p;
        
            cout<<"Enter root value"<<endl;
            cin>>x;
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            Root = t;
            q.enqueue(t);

            while (!q.isEmpty())
            {
                p = q.dequeue();
                cout<< "Enter left child of", p->data;
                cin>>x;
                if(x != -1){
                    t = new Node;
                    t->data = x;
                    t->lchild = t->rchild =NULL;
                    p->lchild = t;
                    q.enqueue(t);
                }
                cout<< "Enter right child of", p->data;
                cin>>x;
                if(x != -1){
                    t = new Node;
                    t->data = x;
                    t->lchild = t->rchild =NULL;
                    p->rchild = t;
                    q.enqueue(t);
                }

            }
            
        }
    void preorder(){preorder(Root);};
    void preorder(Node* p){
        if(p){
            cout<<p->data;
            preorder(p->lchild);
            preorder(p->rchild);
        }

    }
    
    void postorder(){postorder(Root);};
    void postorder(Node* p){
        if(p){
            postorder(p->lchild);
            postorder(p->rchild);
            cout<<p->data;
            }

    }
    void inorder(){inorder(Root);};
    void inorder(Node* p){
        if(p){
            inorder(p->lchild);
            cout<<p->data;
            inorder(p->rchild);
            
            }

    }
    
    void levelorder(){levelorder(Root);}
    void levelorder(Node* Root){
        Queue m(50);
        Node *p;
        cout<<Root->data;
        m.enqueue(Root);
        while(!m.isEmpty()){
            p = m.dequeue();
            if(p->lchild){
                cout<<p->lchild->data;
                m.enqueue(p->lchild);
            }
            if (p->rchild){
                cout<<p->rchild->data;
                m.enqueue(p->rchild);

            }
            
            
        }


    }




void IPreorder(Node *p)
{
 struct Stack stk;
 Stackcreate(&stk,100);
 
 while(p || !isEmptyStack(stk))
 {
 if(p)
 {
 printf("%d ",p->data);
 push(&stk,p);
 p=p->lchild;
 }
 else
 {
 p=pop(&stk);
 p=p->rchild;
 }
 }
}
void IInorder(struct Node *p)
{
 struct Stack stk;
 Stackcreate(&stk,100);
 
 while(p || !isEmptyStack(stk))
 {
 if(p)
 {
 push(&stk,p);
 p=p->lchild;
 }
 else
 {
 p=pop(&stk);
 printf("%d ",p->data);
 p=p->rchild;
 }
 }
}

};


int main(){
    Tree t;
    t.create_tree();
    t.inorder();
}