#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a, b, c;
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;

        if (a + b == c)
        {
            result.push_back(1);
        }
        else if (abs(a-b)== c)
        {
            result.push_back(1);
        }
        else if (a * b == c)
        {
            result.push_back(1);
        }
        else
        {
            result.push_back(0);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << "\n";
    }
    return 0;
}
