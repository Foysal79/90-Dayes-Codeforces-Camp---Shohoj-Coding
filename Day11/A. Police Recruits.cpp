#include <bits/stdc++.h>
using namespace std;
int main() 
{      
    int t; cin >> t;

    int c = 0, p = 0; 

    int ar[t];

    for(int i = 0; i < t ; i++) { 
        cin >> ar[i]; 

        if(ar[i] > 0) { 
            p += ar[i];
        } 
        else {
            if(p < 1) {
              c++;
            }

            else {
                p--;
            }
        }
    } 


        cout << c << endl;
    return 0;
}