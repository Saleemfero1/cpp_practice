#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
class Human
{
    string name;
    int age;
    float salary;

private:
    Human(string name, int age, float salary = 5000)
    {
        this->name = name;
        this->age = age;
        this->salary = salary;
    }
    void getData();
    void getSize();
};

void Human::getData()
{
    cout << "student Information is : " << endl;
    cout << "Name : " << this->name << endl;
    cout << "Age : " << this->age << endl;
    cout << "Salary : " << this->salary;
}

void Human::getSize()
{   
    cout << "standard byte size :"<<endl; 
    cout << sizeof(this->name) << endl;
    cout << sizeof(this->age) << endl;
    cout << sizeof(this->salary) << endl;
}

//------------------------------------driver code------------------------------
int main()
{
    Human saleem("saleem bahi", 21, 70000);
    Human mudassir("mudasir",21,100000);
    saleem.getData();
    mudassir.getData();
    cout <<endl <<"size Of saleem is : " << sizeof(Human)<<endl;
    saleem.getSize();
    return 0;
}