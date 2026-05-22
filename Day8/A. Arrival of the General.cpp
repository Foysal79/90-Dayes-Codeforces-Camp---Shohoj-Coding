#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ar[10000];
    cin >> n;

    int max = INT_MIN, max_i;
    int min = INT_MAX, min_i;

    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        if (max < ar[i])
        {
            max = ar[i];
            max_i = i;
        }
        if (min >= ar[i])
        {
            min = ar[i];
            min_i = i;
        }
    }
    if (max_i < min_i)
    {
        int total = abs(1 - max_i) + abs(n - min_i);
        cout << total << endl;
    }

    else
    {
        int total = abs(1 - max_i) + abs(n - (min_i + 1));
        cout << total << endl;
    }

    return 0;
}