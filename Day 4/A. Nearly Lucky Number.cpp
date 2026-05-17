#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, c = 0;
    cin >> n;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            c += 1;
        }
        n /= 10;
    }
    cout << ((c == 4 || c == 7) ? "YES" : "NO") << endl;
    return 0;
}