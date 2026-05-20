#include <bits/stdc++.h>
using namespace std;
int main() 
{
    double n, sum = 0, total;

    cin >> n;
    for(int i = 0; i < n; i++) { 

        double x; cin >> x;
        sum += x;
    }
    total = sum / n;
    cout << fixed << setprecision(12) << total << endl;
    return 0;
}