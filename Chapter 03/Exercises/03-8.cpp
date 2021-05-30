/*
Page 75
program 3.8
Write a program to print a table of values of the function
y = e ^-x;
for x varying from 0 to 10 in steps of 0.1. The table should appear as follows


x = 0.1 0.2     0.3     0.4     0.5     0.6     0.7     0.8     0.9
1.0
2.0
3.0
.
.
.
.
.
9.0

*/


#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
using namespace std;
void printDesh()
{
    int i;
    cout << "\n";
    for(i = 0; i < 80; i++)
    {
        cout << "-";
    }
    cout << "\n";
}

//Print header
void head(void)
{
    float x;
    int i;
    printDesh();
    for(i = 0; i < 10; i++)
    {
        if(i == 0)
        {
            cout << "X\t";
        }
        else
        cout<< setw(7) << (float(i)/10) << "\t";
    }
    printDesh();
}

void printValue(void)
{
    float x;
    int i, j;
    for(j = 1; j < 10; j++)
    {
        for(i = 0; i < 10; i++)
        {
            if(i == 0)
            {
            cout << j<< ".0\t";
            }
            else
            {
            x =(j + (float(i)/10));
            cout<< setw(7) << exp(x) << "\t";
            }
        }
        cout<< "\n";
    }
    printDesh();
}
//main begin
int main()
{
    head();
    printValue();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
--------------------------------------------------------------------------------
X           0.1     0.2     0.3     0.4     0.5     0.6     0.7     0.8     0.9
--------------------------------------------------------------------------------
1.0     3.00417 3.32012  3.6693  4.0552 4.48169 4.95303 5.47395 6.04965 6.68589
2.0     8.16617 9.02501 9.97418 11.0232 12.1825 13.4637 14.8797 16.4446 18.1741
3.0     22.1979 24.5325 27.1126 29.9641 33.1155 36.5982 40.4473 44.7012 49.4025
4.0     60.3403 66.6863 73.6998 81.4509 90.0171 99.4843 109.947  121.51  134.29
5.0     164.022 181.272 200.337 221.406 244.692 270.426 298.867   330.3 365.038
6.0     445.858 492.749 544.572 601.845 665.142 735.095 812.406 897.847 992.275
7.0     1211.97 1339.43  1480.3 1635.98 1808.04  1998.2 2208.35  2440.6 2697.28
8.0     3294.47 3640.95 4023.87 4447.06 4914.77 5431.66 6002.91 6634.25 7331.97
9.0      8955.3 9897.13   10938 12088.4 13359.7 14764.8 16317.6 18033.7 19930.4
--------------------------------------------------------------------------------
*/
