#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, c = 0, x, y; 
    int ar[10000];
    cin >> n;
 
    cin >> x;

    for(int i = 0; i < x; i++) {
        cin >> ar[i];
    }

    cin >> y;

    for(int i = x; i < x+y; i++) {
        cin >> ar[i];
    }
    sort(ar, ar +(x+y));
    for(int i = 0; i < x + y; i++) {
        if(ar[i] != ar[i+1]) {
            c++;
        }
    }
    if(c == n) {
        cout << "I become the guy." << endl;
    }
   else {
    cout << "Oh, my keyboard!" << endl;
   }
    return 0;
}