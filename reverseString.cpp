// //first line containe test cases that is T
// //second line containe number of rows and columns
// //----------#charlie wants Rotation----------------
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void rotateArr(int vect[100][100], int n)
// {
//     int temp[100][100];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             swap(vect[i][j], vect[j][i]);
//         }
//     }

//     for (int i = 0; i < n / 2; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             swap(vect[i][j], vect[n - 1 - i][j]);
//         }
//     }
// }

// int main()
// {
//     int n;
//     int vect[100][100];
//     int temp[100][100];
//     int T;
//     cin>>T;
//     while(T){
//     cin >> n;
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < n; j++)
//             cin >> vect[i][j];

//     rotateArr(vect, n);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << vect[i][j] << " ";
//         }
//         cout << endl;
//     }
//     T--;
//     }
//     return 0;
// }

