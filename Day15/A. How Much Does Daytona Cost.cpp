#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int t; cin >> t;

   while(t--) {
    int x, y; cin >> x >> y;
    bool found = false;
    for(int i = 0; i < x; i++) {
        int c; cin >> c;
        if(c == y) {
            found = true;
        }
    }
      cout << (found ? "YES" : "NO") << endl;
   }



    return 0;
}