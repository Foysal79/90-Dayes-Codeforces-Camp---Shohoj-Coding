#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, ans;
        cin >> n;
        ans = ceil((n / 2.00) - 1);
        cout << ans << endl;
    }
    return 0;
}