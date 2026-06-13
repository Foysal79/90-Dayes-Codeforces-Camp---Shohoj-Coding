#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int r = 240 - k;
    int c = 0;

    for (int i = 1; i <= n; i++)
    {

        if (r < (i * 5))
        {
            break;
        }

        r = r - (i * 5);
        c++;
    }

    cout << c << endl;
    return 0;
}