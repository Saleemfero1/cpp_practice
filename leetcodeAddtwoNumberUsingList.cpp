#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int data;
    A *Link;
    A(int data)
    {
        this->data = data;
        this->Link = NULL;
    }
};
class B
{
public:
    int data;
    B *Link;
    B(int data)
    {
        this->data = data;
        this->Link = NULL;
    }
};
;

void insert_At_A(A *&AHead)
{
    int data;
    A *Temp = AHead;
    cout << "Enter the data : ";
    cin >> data;
    A *Item = new A(data);
    if (AHead == NULL)
    {
        AHead = Item;
        return;
    }
    while (Temp->Link != NULL)
    {
        Temp = Temp->Link;
    }
    Temp->Link = Item;
    return;
}

void insert_At_B(B *&BHead)
{
    int data;
    B *Temp = BHead;
    cout << "Enter the data : ";
    cin >> data;
    B *Item = new B(data);
    if (BHead == NULL)
    {
        BHead = Item;
        return;
    }
    while (Temp->Link != NULL)
    {
        Temp = Temp->Link;
    }
    Temp->Link = Item;
    return;
}

void display(A *&AHead, B *&BHead)
{
    if (AHead == NULL || BHead == NULL)
    {
        cout << "wrong input given." << endl;
        return;
    }
    A *tempA = AHead;
    B *tempB = BHead;
    cout << "number one is :";
    while (tempA != NULL)
    {
        cout << tempA->data;
        tempA = tempA->Link;
    }
    cout << endl
         << "number two is :";
    while (tempB != NULL)
    {
        cout << tempB->data;
        tempB = tempB->Link;
    }
}
int addition(A *&AHead, B *&BHead)
{
    A *tempA = AHead;
    B *tempB = BHead;
    int digit,sumA=0,sumB=0, sum = 0, i = 0;

    while (tempA!=NULL || tempB!=NULL)
    {  
        if(tempA!=NULL)
        {
            cout<<"sumA = "<<sumA<<endl;
            sumA=sumA+(tempA->data*powf(10,i));
            tempA=tempA->Link;
        }

        if(tempB!=NULL)
        {
            cout<<"sumB = "<<sumB<<endl;
            sumB=sumB+(tempB->data*powf(10,i));
            tempB=tempB->Link;
        }
        i++;

// check the difference between pow(),powf()...etc

       /* digit = tempA->data + tempB->data;
        sum = sum + digit * pow(10, i);
        i++;
        tempA = tempA->Link;
        tempB = tempB->Link;
        digit = 0;*/
    }
    sum=sumA+sumB;
    cout<<sum<<endl;
    return sum;
}
int main()
{
    int num;
    A *AHead = NULL;
    B *BHead = NULL;

    cout << "Enter the number of Elements : ";
    cin >> num;
    cout << "Enter the Element of list A : " << endl;
    for (int i = 0; i < num; i++)
    {
        insert_At_A(AHead);
    }
    cout << "Enter the Element of list B : " << endl;
    for (int i = 0; i < num-1; i++)
    {
        insert_At_B(BHead);
    }
    display(AHead, BHead);
    cout << "sum is :" << addition(AHead, BHead);
    return 0;
}
