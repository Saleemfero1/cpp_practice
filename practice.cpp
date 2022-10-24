// #include <iostream>
// #include <bits/stdc++.h>
// #include <string.h>
// using namespace std;

// int main()
// {
//     char txt[30];
//     cout << "Enter the string : ";
//     cin >> txt;
//     int length = strlen(txt);
//     int i = 0;
//     int j = length - 1;
//     while (i < j)
//     {
//         if (txt[i] == txt[j])
//         {
//             i++;
//             j--;
//             continue;
//         }
//         else
//             cout << "not a palindrome..... ";
//         return 0;
//     }
//     cout << "This is palindrome.....";2
//     return 0;
// }
#include <stdio.h>
#include <string.h>
char
    data[100],
    concatdata[117], src_crc[17], dest_crc[17], frame[120], divident[18];
char divisor[18] = "10001000000100001";
char res[18] = "0000000000000000";
void crc_cal(int node)
{
    int i, j;
    for (j = 17; j <= strlen(concatdata); j++)
    {
        if (divident[0] == '1')
        {
            for (i = 1; i <= 16; i++)
                if (divident[i] != divisor[i])
                    divident[i - 1] = '1';
                else
                    divident[i - 1] = '0';
        }
        else
        {
            for (i = 1; i <= 16; i++)
                divident[i - 1] = divident[i];
        }
        if (node == 0)
            divident[i - 1] = concatdata[j];
        else
            divident[i - 1] = frame[j];
    }
    divident[i - 1] = '\0';
    printf("\ncrc is %s\n", divident);
    if (node == 0)
    {
        strcpy(src_crc, divident);
    }
    else
        strcpy(dest_crc, divident);
}
int main()
{
    int i, len, rest;
    printf("\n\t\t\tAT SOURCE NODE\n\nenter the data to be send :");
    gets(data);
    strcpy(concatdata, data);
    strcat(concatdata, "0000000000000000");
    for (i = 0; i <= 16; i++)
        divident[i] = concatdata[i];
    divident[i + 1] = '\0';
    crc_cal(0);
    printf("\ndata is :\t");;;
    puts(data);
    printf("\nthe frame transmitted is :\t");
    printf("\n%s%s", data, src_crc);
    printf("\n\t\tSOURCE NODE TRANSMITTED THE FRAME ---->");
    printf("\n\n\n\n\t\t\tAT DESTINATION NODE\nenter the received frame:\t");
    gets(frame);
    for (i = 0; i <= 16; i++)
        divident[i] = frame[i];
    divident[i + 1] = '\0';
    crc_cal(1);
    if (strcmp(dest_crc, res) == 0)
        printf("\nreceived frame is error free ");
    else
        printf("\nreceived frame has one or more error");
    return 1;
}
