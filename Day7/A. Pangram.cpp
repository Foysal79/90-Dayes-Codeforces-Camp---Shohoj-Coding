#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 0;
    string s;
    cin >> n >> s;

    int f[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        f[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {

        if (f[i] == 0)
        {

            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}