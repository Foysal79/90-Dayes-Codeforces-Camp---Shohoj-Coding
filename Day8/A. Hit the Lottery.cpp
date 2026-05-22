#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, c = 0;
    cin >> n;
    c += n / 100;
    n %= 100;

    c += n / 20;
    n %= 20;

    c += n / 10;
    n %= 10;

    c += n / 5;
    n %= 5;

    c += n;

    cout << c << endl;
    
    return 0;
}