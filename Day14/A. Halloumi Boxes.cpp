#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t; cin >> t;

    while(t--) {

        int n, k; cin >> n >> k;
       vector<int> v(n);
       for(int i = 0; i < n; i++) cin >> v[i];

       if(k == 1) {
        bool sorted = true;
        for(int i = 1; i < n; i++) {
           if(v[i] < v[i-1] ) {
            sorted = false;
            break;
           }
        }

        cout << (sorted ? "YES\n" : "NO\n");
       }
       else{
        cout << "YES\n";
       }  

    }
    return 0;
}