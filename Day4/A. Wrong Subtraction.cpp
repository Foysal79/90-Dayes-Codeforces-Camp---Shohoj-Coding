#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x;
    cin >> n >> x;
    for (int i = 0; i < x; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n -= 1;
        }
    }
    cout << n << endl;
    return 0;
}