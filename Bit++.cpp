//================================================ Bit++ ==========================================//
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int X = 0;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string statement;
        cin >> statement;

        //check if he want to plus or minus one
        if (statement == "++X" || statement == "X++")
        {
            X ++;
        }
        else if (statement == "--X" || statement == "X--")
        {
            X --;
        }
    }
    cout << X << endl;

    return 0;
}