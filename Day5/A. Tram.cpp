#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int u = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        u -= x;
        u += y;
        if (u > mx)
        {
            mx = u;
        }
    }

    cout << mx << endl;
    return 0;
}