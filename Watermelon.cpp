#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//===================== main progran to know if the ywo parts of watermelon are even or vot=======================//
int main()
{
    int weight;
    cin >> weight;
    bool flag = false;

    // check if the two parts are even 
    for (int i = 1; i < weight; i++)
    {
        if((weight - i) % 2 == 0 && i % 2 == 0){ 
            flag = true;
            break;
        }
    }

    //print if the two parts are even or not
    if(flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" <<endl;
           
     
    return 0;
}
