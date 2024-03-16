//========================================================== Team =====================================================// 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int num_problems;
    cin >> num_problems;
    int result = 0;
    for (int i = 0; i < num_problems; i++)
    {
        //take the input and check if there are sure
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            int solution;
            cin >> solution;
            if(solution == 1)
                count += 1;
            else
                continue;
        }

        //check if they will solve this problem
        if(count >= 2)
            result += 1;
    }

    cout << result << endl;

    return 0;
}