//================================================ is prime ==========================================//
#include <bits/stdc++.h>
using namespace std;

//check if a number is prime or not
bool is_prime (int num)
{
    bool prime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0 )
        {
            prime = false;
            break;
        }
    }

    return prime;
}

//main program
int main()
{
    int num;
    cin >> num;
    if(is_prime(num))
        cout << "Prime" <<endl;
    else
        cout << "Not Prime" <<endl;
    return 0;
}