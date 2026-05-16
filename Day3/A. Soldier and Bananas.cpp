#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int total = 0;
    for (int i = 0; i <= w; i++)
    {
        total += i * k;
    }
    if (total <= n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << abs(total - n) << endl;
    }

    return 0;
}