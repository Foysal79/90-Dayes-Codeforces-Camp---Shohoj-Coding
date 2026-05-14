#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int w = 0;
    while (t--)
    {
        int p, v, t;
        cin >> p >> v >> t;
        if (p + v + t >= 2)
        {
            w++;
        }
    }

    cout << w << endl;

    return 0;
}