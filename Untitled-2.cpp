#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

//---------------------------write your function code here!------------------
//Sort 1 : BUBBLE SORT
//har element ko uske bazu wale se comapre karo aur agar current element 
//next wale element se bada ho to swap karo 
//NOTE isme first iteration me max element milega aur ye piche se sort hoga 
//agar firdt iteration me ek bhi swap nahi huwa to samaja lo wo sorted hai

// void bubble(vector<int>&vect,int N){
//     int flag = 0;
//     for(int i=0; i<N; i++){
//         for(int j=0; j<N-1; j++){
//             if(vect[j]>vect[j+1]){
//                 swap(vect[j],vect[j+1]);
//                 flag = 1;
//             }
//         }
//         if(flag == 0){ 
//             cout<<"this array is sorted.";
//             break;
//         }
//     }
// }

// Sort 2 : SELECTION SORT
//selection sort is sabse chota element nikalo 
//aur use replace karo ith index ke sath 
//NOTE isme element starting se sort hote hai isme first iteration me min element milta hai
// void Selection(vector<int> &vect, int N){
//     int minIndx = 0;
//     for(int i=0; i<N; i++){
//         for(int j=i; j<N; j++){
//             if(vect[minIndx]>vect[j])
//                 minIndx = j;
//         }
//         swap(vect[minIndx],vect[i]);
//         minIndx = i+1;
//     }
// }

//Sort 3: INSERTION SORT
//insertion sort me simple pahela wala element ko ek partition  man ke 
// aur baki bach huwa arrey ko ek partition man ke chalo
//dusre partition ka pahela element current(cur) element hoga
//aur pahela partion 0 pe rahega jo j= i-1;
//dusra partition 1 se N tak rahega Jo ke i=1 to N hai
//ab hum simply ith element ko curr me copy karenge aur 
//aur pahele partition me chek karenge ke current element kah fit hota hai(yani pahele wale part ko 
// element jab tak cur se chota nahi milata tab tak j-- jab condition met ho element ko j par dalenge)
 
// void InsertionSort(vector<int> &vect, int N){
//     int cur; 
//     for(int i=1;i<N;i++){
//         cur = vect[i];
//         int j = i-1;
//         for(j=i-1;vect[j]>cur || j>=0;j--){
//            vect[j+1]=vect[j];
//         }
//         vect[j]=cur;
//     }

// }

//Sort 4 : MERGE SORT(Recurssion)
//refer mergeSort.cppq prgrm 

//Sort 5: QUICK SORT(Recurssion)
int partition(vector<int>&vect,int low,int high){
    
    int pivote = vect[low];
    //partion;
    int left = low;
    int right = high; 
    while(left<right){
        while (vect[left]<spivote){
            left++;
        }
        while(vect[right]>pivote){
            right--;
        }
        swap(vect[left],vect[right]);
        if(right<left)
            swap(vect[right],pivote);

    }
    return right;
}
void QuickSort(vector<int> &vect, int low, int high){
    if(low>=high)
        return;
    int pivote = partition(vect,low,high);
    QuickSort(vect,low,pivote);
    QuickSort(vect,pivote+1,high);
   
}


//------------------------------------driver code----------------------------
int main(){
int T; //T means TestCases
cout<<"Enter TestCase : ";
cin>>T;
while(T){
int N;
cin>>N;
//---------function call Feild-------------
vector<int>vect;
for(int i=0;i<N;i++){
    int data;
    cin>>data;
    vect.push_back(data);
}
QuickSort(vect,0,N-1);
//write functio name here

for(auto x:vect){
    cout<<x<<" ";
}
//---------OutPut Feild---------------------

T--;
}
return 0;
}