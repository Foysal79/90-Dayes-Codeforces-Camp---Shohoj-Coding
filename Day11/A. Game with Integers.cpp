#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t; cin >> t;
    while(t--) {

        int n; cin >> n;
        
        int m = n - 1;
        int p = n + 1; 
         if(m % 3 == 0 ||p % 3 == 0) {
          cout << "First" << endl;
        }else {
            cout << "Second" << endl;
        }
    }
    return 0;
}