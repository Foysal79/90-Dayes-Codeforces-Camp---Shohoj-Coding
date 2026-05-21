#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    getline(cin, s);
    int c = 0;
    int f[26] = {};
    for(char c : s) {
      if(c >= 'a' && c <= 'z') {
        f[c - 'a']++;
      }
    }
    for(int i = 0; i < 26 ; i++) {
        if(f[i] > 0) {
            c += 1;
        }
    }
    cout << c << endl;
    return 0;
}