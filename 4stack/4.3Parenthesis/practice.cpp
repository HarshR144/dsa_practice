#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student{
    string name;
    int roll;
    int marks;
    public:
        void getdata(){
            cout<<"enter name: "<<endl;
            cin.ignore();
            getline(cin, name);

            cout<<"enter roll:"<<endl;
            cin>>roll;

            cout<<"enter marks:"<<endl;
            cin>>marks;
        }

        void display(){
            cout<<name<<endl;
            cout<<roll<<endl;
            cout<<marks<<endl;
        }
};

int main(){
    int n = 0;
    fstream oop;
    oop.open("student.txt",ios::out);
    cout<<"enter no of students: "<<endl;
    cin>>n;
    Student s[n];

    if(!oop){
        cout<<"error"<<endl;

    }
    else{
        cout<<"file created."<<endl;
        }
int x= -1;
while(x!=3) {
    cout<<"1.write"<<endl;
    cout<<"2.read"<<endl;
    cin>>x;
if(x==1){    
    for (int i = 0; i < n; i++)
    {
        s[i].getdata();
        oop.write((char*)&s[i],sizeof(s[i]));
    }
    oop.close();
    cout<<endl;
}
if(x==2){
    cout<<"displaying file"<<endl;
    oop.open("student.txt",ios::in);

    for (int i = 0; i < n; i++)
    {
        oop.read((char*)&s[i],sizeof(s[i]));
        s[i].display();
    }
    oop.close();
}
}
}