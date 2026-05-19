#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, c = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            c += i;
        }
        else
        {
            c -= i;
        }
    }
    cout << c << endl;
    return 0;
}