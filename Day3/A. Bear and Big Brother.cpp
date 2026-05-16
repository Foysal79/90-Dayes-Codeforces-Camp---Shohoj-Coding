#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int l, v;
    cin >> l >> v;
    int i = 0;
    while(l <= v) {
      i++;
      l *= 3;
      v *= 2;
    }

    cout << i << endl;
    return 0;
}