#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, h;
    cin >> n >> h;
    int c = 0;
    for(int i = 0; i < n; i++) 
    {
      int x;
      cin >> x;
      if(x > h) {
        c += 2;
      }
      if(x <= h) {
        c++;
      }
    }
    cout << c << endl;

    return 0;
}