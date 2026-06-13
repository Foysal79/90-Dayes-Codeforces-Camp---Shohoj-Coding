#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, k, l, c, d, p, nl, np, t;  
    cin >> n >> k >> l >> c >> d >> p >> nl >> np; 

    int drink = ( k * l) / nl;
    int li = c * d; 
    int s = p / np;

    t = min(drink, min(li, s));
    cout << t / n << endl;
    return 0;
}