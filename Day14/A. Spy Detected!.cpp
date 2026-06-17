#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;

        cin >> x;

        vector<int> v(x);

        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        vector<int> a = v;
        sort(a.begin(), a.end());

        for (int i = 0; i < x; i++)
        {
            if (v[i] != a[1])
            {
                cout << i + 1 << endl;
            }
        }
    }
    return 0;
}