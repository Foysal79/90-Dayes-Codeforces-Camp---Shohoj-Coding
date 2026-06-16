#include <bits/stdc++.h>
using namespace std;
int main() 
{
     int a, b; cin >> a >> b;
     int minimum = min(a, b);
     int s = (abs(a - b) ) / 2 ;
     cout << minimum << " " << s << endl;
    return 0;
}