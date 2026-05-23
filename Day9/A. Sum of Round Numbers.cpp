#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        vector<string> v;
        int len = s.size();
        for (int i = 0; i < len; i++)
        {
            if (s[i] != '0')
            {
                string num = "";
                num += s[i];

                for (int j = i + 1; j < len; j++)
                {
                    num += "0";
                }

                v.push_back(num);
            }
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    return 0;
}