#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(3);

        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        vector<int> a = v;
        sort(a.begin(), a.end());

        int median = a[1];

        for (int i = 0; i < 3; i++)
        {
            if (v[i] != median)
            {
                cout << v[i] << "\n";
                break;
            }
        }
    }
    return 0;
}
