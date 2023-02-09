#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

  
        
}*first;
        void display(Node* p){
            while(p)
            {
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<"\n";
        }
        
        void create(int a[], int n){

            first = new Node;
            first->data=a[0];
            first->next=NULL;
            Node* t,*last;
            last=first;
            for (int i =1; i<n ; i++)
            {
                t = new Node;
                t->data = a[i];
                t->next=0;
                last->next=t;
                last=t;
            }
            
        }

        int count(Node* p){
            if(p!=NULL)
            {
                return count((p->next)) + 1;
          
            }
            else
            return 0;
        }
        int add(Node* p){
            int sum = 0;
            while(p)
            {
                sum+=p->data;
                p=p->next;
            }
            return sum;

        }

        int main(){
            int a[]={1,2,3,4,5};
            create(a,5);
            display(first);
            cout<<count(first)<<endl;
            cout<<add(first)<<endl;
            


        }

