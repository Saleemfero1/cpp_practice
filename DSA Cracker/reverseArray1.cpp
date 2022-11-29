#include <iostream>
#include <vector>
using namespace std;

vector<int> quickSort(vector<int> vect, int low,int high,int n){
    if(low<high){
        partition(vect,low,high);
        
    }
    return vect;
}

int main()
{
   vector<int> vect;
   int n,x;

   cout<<"Enter size of vect: ";
   cin>>n;

   cout<<"Enter The vect Element : "<<endl;
   for(int i=0; i<n; i++){
       cin>>x;
       vect.push_back(x);
   }

   quickSort(vect,0,n-1,n);
   
   vector<int>::iterator itr;
   for ( int i :vect)
   {
      cout<< i <<" "; 
   }
   
return 0;
}