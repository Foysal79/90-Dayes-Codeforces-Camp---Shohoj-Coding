#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ar[100000];
    int c = 0;
    for (int i = 1; i <= t; i++)
    {
        cin >> ar[i];
    }

    for (int i = 1; i <= t; i++)
    {
        if (ar[i] != ar[i + 1])
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}