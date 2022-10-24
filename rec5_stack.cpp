//delete specific element from stack by using reccursion 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int coun = 0; this is for delete mid elemnt 
//---------------------------write your function code here!------------------
void deleteEle(stack<int> &st, int k)
{
    if(st.top()==k){
        st.pop();
        return;
    }
    int x = st.top();
    st.pop();
    deleteEle(st,k);
    st.push(x);
}

void display(stack<int>&st){
    cout<<"after Deleting Element Stack is :"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

// void deleteMidEleStk(stack<int> &st, int N)
// {
//     if(coun==(N/2)){
//         coun =0;
//         st.pop();
//         return;
//     }
//     int x = st.top();
//     st.pop();
//     coun++;
//     deleteEle(st,N);
//     st.push(x);
    
// }

//------------------------------------driver code------------------------------
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        stack<int> st;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            int data;
            cin >> data;
            st.push(data);
        }
        int k;
        cout<<"Enter the Element to be delete : ";
        cin>>k;
        deleteEle(st,k);
        display(st);
    }
    return 0;
}