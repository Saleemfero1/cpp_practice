//-------------------inheritence-------------------------
//a class can inherits the property, behavour, status of another class is called inheritence 
//class which can inheriting some other classes property,behavior etc is called sub/child class
//a class which is inherited by other class is called super or parent class 
//inheritence  inludes  3 types modes
//1, public 2,protected 3,private
//p.public to c.public will be public
//p.public to c.protected will be protected  
//p.public to c.private will be private
//private data member of any class cannot be accessd by any other classes and function 
//p.protected to c.public will be protected 
//p.protected to c.protected will be protected 
// p.protected to c.private will be private
//---------------------examples----------------------------------------------------------
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//---------------------------write your function code here!------------------
//parent class / super class 
class Human{
    public:
        string name;
        int age;
        int ssn;
        int weight;
        int height;
    private:
        int Atmnum;
        string key;

        public:
            void kuchbhi(){
                cout<<"Han bhai mai public se hun:"<<endl;
            }
};

//child or sub class
//public to public
class male:public Human{
    public:
        string gender;
        int fee;   

};


//public to private 
class female:private Human{
    public:
        string cosmatic;
        
};

//------------------------------------driver code------------------------------
int main(){
    //public to public
        cout<<"public to public "<<endl; 
        male salman;
        salman.name="fero";
        salman.age=21;
        salman.weight=52;
        salman.height=164;
        cout<< "name : "<<salman.name<< endl;
        cout<< "age  "<<salman.age <<endl;
        cout<< "weight "<<salman.weight <<endl;
        cout<< "height "<<salman.height <<endl;

    //public to private
        cout<<"public to private "<<endl; 
        female salma;
    //this data member is defined publicaly in child class so it can be accessable
        salma.cosmatic="asure soap";
        cout<<"cosmatic "<<salma.cosmatic<<endl;
    //this data members are inherited from  human class with private mode so thats y this data 
    //is private to the child class it is not accessable to the outside of this class
        // salma.name="fero";
        // salma.age=21;
        // salma.weight=52;
        // salma.height=164;
        // cout<< "name : "<<salma.name<< endl;
        // cout<< "age  "<<salma.age <<endl;
        // cout<< "weight "<<salma.weight <<endl;
        // cout<< "height "<<salma.height <<endl;



//-----------------------------------this is modeifiers-------------------------
//example1: for public 
//create object of instance
    // Human male;
    // male.name="saleem";
    // male.age=21;
    // cout<<"name of male "<<male.name<<endl;
    // cout<<"age of "<<male.name<<" "<<male.age<<endl;
    // male.kuchbhi();


//example2 : for private
//create object of instance
    //Human saleem;
    //saleem.Atmnum=8143; 
        //this genrates Errorr error: 'int Human::Atmnum' is private within this context 
        //saleem.Atmnum=8143;
    //saleem.key="secrate";
    //error: 'std::__cxx11::string Human::key' is private within this context
    //saleem.key="secrate";
    //cout<<"Atm number "<<saleem.Atmnum<<endl; // it also gives an error bcz its declaration private
    //cout<<"key "<<saleem.key<<endl; // it also gives an error bcz its declaration private

return 0;
}
