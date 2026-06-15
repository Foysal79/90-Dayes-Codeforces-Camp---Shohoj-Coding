#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int t; cin >> t; 

   while(t--) {
    string s; cin >> s;
    int f = 0, se = 0;
     f = ( s[0] - '0' ) + ( s[1] - '0' ) + ( s[2] - '0' );
     se = ( s[3] - '0' ) + ( s[4] - '0' ) + ( s[5] - '0' ); 
     if(f == se) {
       cout << "YES" << endl;
     } 
     else {

        cout << "NO" << endl;
     }
   }

    return 0;
}