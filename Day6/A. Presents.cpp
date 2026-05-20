#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[10000], i, n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        ar[x] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}