#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int c = 0;
    while (n--)
    {
        int x, y;

        cin >> x >> y;

        if (y - x >= 2)
        {
            c += 1;
        }
    }

    cout << c << endl;
    return 0;
}