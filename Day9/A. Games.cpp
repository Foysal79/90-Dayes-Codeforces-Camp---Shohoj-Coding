#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, i, a[100], b[100];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int c = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            if(a[i] == b[j]){
                c += 1;
            }
        }
    }
    cout << c << endl;
    return 0;
}