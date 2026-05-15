#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin >> s;
    int c = 0;
    int freq[26] = {0};
    for(char ch : s) {
        freq[ch - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
           c++;
        }
    }
    cout << ( c % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

    return 0;
}