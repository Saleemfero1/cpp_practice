#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// there are 3 types of modifier
// 1>public in which we can access the data from the class to the otside world
// 2>private this second modifire and this by default taken by the compiler

// by deafault class value is 1
//  class employee{
//      public:
//  };

// int main(){
//    cout<<sizeof(employee);
// }
// output ------->1

// class employee{
//     public:
//         int ssn;
//         char name[10];
// };
// int main(){
//    cout<<sizeof(employee);
// }
// output ------->16 because int is 4bit char array 10 bytes total is taken 16

class employee
{
private:
    string name;

public:
    int ssn;
    char section;
    
    //default constructor 
    // employee(){
    //     cout<<"this is default construcotr ...."<<endl;
    // }
    
    //paramterized construcotr
    employee(string name,int ssn,char sec){
        this->name=name;
        this->ssn=ssn;
        this->section=sec;
    }
    //copy constructor
     employee(employee& temp){
        this->name=temp.name;
        this->ssn=temp.ssn;
        this->section=temp.section;
    }

    
    void setData(string Ename, int id, char sec)
    {
        name = Ename;
        ssn = id;
        section = sec;
    }

    string getname()
    {
        return name;
    }
    
    void print(){
        cout<<"name is : "<<this->name<<endl;
        cout<<"Id  is : "<<this->ssn<<endl;
        cout<<"name is : "<<this->section<<endl;

    }
};

int main()
{ 

//------------------------------copied constructor---------------------------
//   employee greeb("salman",654,'C');
//   greeb.print();
//   employee Amir(greeb);//here greeb is object that copied in amir 
//   Amir.print();

//----------------------here we learned about parameterized construcotr---------------
//   employee greeb("salman",124,'C');
//   greeb.print();
//   employee Amir("sharuk King",786,'k');
//   Amir.print();
  

//---------------here we learned about default constructor------------------------------     
// cout<<"stille construcor not created...!"<<endl;
// employee saleem;
// cout<<"constructor created ....! "<<endl;
//when object will create at the same time constructor will also created by default 
//----------------------------------------------------------------
    // employee saleem;
    // saleem.setData("saleem",20,'B');
    // cout<<"Employee name is : "<<saleem.getname()<<endl;
    //heere private data accessing 
    // cout<<"Employee ssn is : "<<saleem.ssn<<endl;
    // cout<<"Employee Section Is : "<<saleem.section;
//-------------------------------------------------------------------
    //statically allocation
    // employee A;
    // A.setData("saleem",43,'A');
    // cout<<"Employee name is : "<<A.getname()<<endl;
    // cout<<"Employee ssn is : "<<A.ssn<<endl;
    // cout<<"Employee Section Is : "<<A.section<<endl; 
//---------------------------------------------------------------------
    //dynamically allocation 
    // employee *B=new employee;
    // B->setData("shoaib",44,'C');
    // cout<<"Employee name is : "<<B->getname()<<endl;
    // cout<<"Employee ssn is : "<<B->ssn<<endl;
    // cout<<"Employee Section Is : "<<B->section<<endl;
//--------------------------------OR-------------------------------------
    // employee *B=new employee;
    // (*B).setData("shoaib",44,'C');
    // cout<<"Employee name is : "<<(*B).getname()<<endl;
    // cout<<"Employee ssn is : "<<(*B).ssn<<endl;
    // cout<<"Employee Section Is : "<<(*B).section<<endl;



}
