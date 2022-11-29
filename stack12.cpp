#include <iostream>
#include <bits/stdc++.h>
using namespace std;
static int work;
//---------------------------write your function code here!------------------
//TOSHIBA INTERVIEW QUESTION:
//BUILD STATE MACHINE DAIGRAM 

//START->WORKING()->(WORK DONE)->SHUTDOWN()->TERMINATE():
//          |              ^      ^
//    IF(WORK>LIMIT)  (WORK<LIMIT)|                      
//          |              |      |
//      IDLE(WORK>100)-----|------|
//------------------------------------driver code------------------------------
int main()
{
    int T = 0;
    int upperLimit = 10;
    cout << "press one for Turn On: ";
    cin >> T;
    while (T >= 0)
    {
        switch (T)
        {
        case 1:
            cout << "Turn On." << endl;
            cout << "enter work : ";
            cin >> work;
            cout << "Entering into work mode : " << endl;

        case 2:
            cout << "checking work pressur." << endl;
            if (work > upperLimit)
            {
                cout << "work is limit Exceeds." << endl;
                T = 3;
            }
            else
            {
                cout << "work is done." << endl;
                T = 0;
            }
            break;
        case 3:
            if (work > upperLimit)
            {
                cout << "system is in idle case." << endl;
                if (work > 100)
                {
                    T = 0;
                    break;
                }
                work--;
                T = 2;
            }
            break;

        case 0:
            cout << "system is going to shut down." << endl;
            cout << "system is completely terminates....." << endl;
            T = -1;
            break;

        default:
            cout << "enter the valid choice." << endl;
            exit(0);
            break;
        }
    }

    return 0;
}