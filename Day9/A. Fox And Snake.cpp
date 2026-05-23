#include <bits/stdc++.h>
using namespace std;
int main() 
{


  int n, m; 
  cin >> n >> m;
  int f = 0;
  for(int i = 1; i <= n; i++) {
    if(i % 2 == 0) {

        if(f == 0) {
             for(int j = 1; j <= m; j++) {
            if(j == m) cout << "#" ;
            else cout << "." ;
           }
            f = 1;
        }

        else {
           for(int j = 1; j <= m; j++) {
            if(j == 1) cout << "#" ;
            else cout << "." ;
           }
            f = 0;
        }
        cout << endl;
    }
    else {
         for(int j = 1; j <= m; j++) {
         cout << "#" ;
     }
      cout << endl;
    }
   
  }


    return 0;
}