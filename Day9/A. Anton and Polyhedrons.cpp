#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t; cin >> t;
    int c = 0;
    while(t--) {
        string s;
        cin >> s;
        
      if(s == "Icosahedron") {
        c += 20;
      }
      if(s == "Dodecahedron") {
        c += 12;
      }

      if(s == "Octahedron") {
        c += 8;
      }
      if(s == "Cube") {
        c += 6;
      }

      if(s == "Tetrahedron"){
        c += 4;
      }
    

    }
      cout << c << endl;
    return 0;
}