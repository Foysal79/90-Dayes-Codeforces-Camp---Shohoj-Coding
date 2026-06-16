#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int ar[5];
    for(int i = 0; i < 4; i++) {
        cin >> ar[i];
    }
    sort(ar, ar+4); 
    

   int a = ar[3] - ar[0];
   int b = ar[3] - ar[1];
   int c = ar[3] - ar[2]; 
   cout << a << " " << b << " " << c << " "; 
    return 0;
}