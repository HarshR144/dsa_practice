// Lab assignment 4

#include<iostream>
#include<fstream>
using namespace std;

class student {
 private:

  int roll;
  char name[100];
  float marks;

 public:

 void getdata(void){
     cout<<"Enter Name: ";
     cin>>ws;
     cin.getline(name,100);

     cout<<"Enter Roll NO: ";
     cin>>roll;

     cout<<"Enter marks : ";
     cin>>marks;
     cout<<endl;
 }

 void display (){
     cout<<"Name: "<<name<<endl;
     cout<<"Roll No: "<<roll<<endl;
     cout<<"Marks: "<<marks<<endl;
 }
};

int main(){
    int n;
    cout<<"Total Students: ";
    cin>>n;

    student s[n];
    fstream OOP;

    OOP.open("file.txt",ios::out);

    if(!OOP){
        cout<<"Error in creating file !!";
    }

    else{
        cout<<"file created successfully !!"<<endl;
    }

    cout<<endl;

    for (int i = 0; i < n; i++)
    {
        s[i].getdata();
        OOP.write((char*)&s[i],sizeof(s[i]));
    }

    OOP.close();
    cout<<"saved successfully!! "<<endl;

    cout<<endl<<"loading data...."<<endl;
    OOP.open("file.txt",ios::in);

    for (int i = 0; i < n; i++)
    {
        OOP.read((char*)&s[i],sizeof(s[i]));
        s[i].display();
    }

    OOP.close();

}