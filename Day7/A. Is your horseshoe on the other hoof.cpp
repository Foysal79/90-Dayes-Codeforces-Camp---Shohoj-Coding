#include <bits/stdc++.h>
using namespace std;
int main() 
{

   int a, b, c, d, ca = 0;
   cin >> a >> b >> c >> d;
   int ar[4];
   ar[0] = a, ar[1] = b, ar[2] = c, ar[3] = d;

   sort(ar, ar + 3);


   for(int i = 0; i < 4; i++) {

    if(ar[i] != ar[i+1]) {

        ca++;
    }
   }
   cout << ca << endl;
    return 0;
}