//fibonacci  for n number if u want to write for nth term just remove for 
//loop from main programm and pass num as argument  
#include<iostream>
using namespace std;

int Fibo(int num){
    if(num==1){
        return 1;
    }
    if(num==0){
        return 0;
    }
    return Fibo(num-1)+Fibo(num-2);
}
int main(){
    int num;

    cout<<"Enter The number : ";
    cin>>num;
    
    for(int i=0; i<num; i++){
         cout<< "Fibnacci Of ("<<i<<")"<<" is :"<<Fibo(i)<<endl;
    }
   

}