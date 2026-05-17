#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int c = 0, sm = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            c++;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            sm++;
        }
    }

    if (c > sm)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
    }

    cout << s << endl;

    return 0;
}