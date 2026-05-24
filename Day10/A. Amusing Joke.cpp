#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s1, s2, s3; cin >> s1 >> s2 >> s3; 

    string s = s1 + s2;
    int s_len = s.size(); 
    int s3_len = s3.size();
    sort(s.begin(), s.end());
    sort(s3.begin(), s3.end());

    if(s == s3) {

        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
   

    return 0;
}