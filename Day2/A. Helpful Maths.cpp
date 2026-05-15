#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin >> s;
    int ar[1000];
    int j = 0;
    for(int i = 0; i < s.size(); i += 2)
    {
        ar[j] = s[i] - '0';
        j++;
    }

    sort(ar, ar + j);

    for(int i = 0; i < j; i++) 
    {
        cout << ar[i] ;
        if(i < j - 1) {
         cout << '+' ;
        }
    }

    return 0;
}