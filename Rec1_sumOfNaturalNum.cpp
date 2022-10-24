#include<iostream>
using namespace std;

int SumOfNum(int num){
    if(num<=-1){
        return 0;
    }
    return (num+SumOfNum(num-1));
}
int main(){
    int num;

    cout<<"Enter The number Of Elements : ";
    cin>>num;
    

 cout<< "The Sum Of Array Is : "<<SumOfNum(num);

}