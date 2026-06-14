#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int s = 0, d = 0, f = 0, l = 0, r = n - 1;
    bool turn = true;
    while (!ar.empty())
    {

        if (f == 0)
        {

            if (ar[0] > ar.back())
            {

                s += ar[0];
                ar.erase(ar.begin());
            }
            else
            {
                s += ar.back();
                ar.pop_back();
            }
            f = 1;
        }
        else
        {

            if (ar[0] > ar.back())
            {

                d += ar[0];
                ar.erase(ar.begin());
            }
            else
            {
                d += ar.back();
                ar.pop_back();
            }
            f = 0;
        }
    }
    cout << s << " " << d << endl;
    return 0;
}