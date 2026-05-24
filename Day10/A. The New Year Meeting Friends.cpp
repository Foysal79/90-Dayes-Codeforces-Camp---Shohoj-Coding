#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = abs(a - b);
    int y = abs(b - c);
    int z = abs(a - c);
    if(x > y && x > z) {
        cout << x << endl;
    }
    if(y > x && y > z) {
        cout << y << endl;
    }
    if(z > x && z > y) {
        cout << z << endl;
    }
    return 0;
}