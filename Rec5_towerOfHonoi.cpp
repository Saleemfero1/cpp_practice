#include<iostream>
using namespace std;

void TowerOfHonoi(int num,char source,char temp,char dest){
    if(num==0){
        return;
    }
    TowerOfHonoi(num-1,source,dest,temp);
    cout<<"Move Disk "<<num<<" from "<<source<<" to "<<dest<<endl;
    TowerOfHonoi(num-1,temp,source,dest);
}

int main(){
    int num;

    cout<<"Enter The Number Of Disk : ";
    cin>>num;
    TowerOfHonoi(num,'A','B','C');
    return 0;
}