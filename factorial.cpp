#include <iostream>
using namespace std;
static int i = 0;

int fact(int n){
    i++;
    if (n == 1){
        cout << "recursion No :" << i << endl;
        return 1;
    }
    else
        return (n * fact(n - 1));
}

int main(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Answer is : " << fact(num);
}