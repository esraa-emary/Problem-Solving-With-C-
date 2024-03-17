//========================================================== Theatre Square =====================================================// 
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    ll num1, num2, num3, total1=0 , total2 =0;
    cin >> num1 >> num2 >> num3;

    //calculate the required length and hight
    total1 = ceil ( static_cast<double>(num1) / num3);
    total2 = ceil (static_cast<double>(num2) / num3);
    cout << total1 * total2 << endl;

    return 0;
}