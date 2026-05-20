#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int n; cin >> n;
   string s1, s2;
   s1 = "that I love ";
   s2 = "that I hate ";
   cout << "I hate " ;
   for(int i = 2; i <= n; i++) {
    if(i % 2 == 0) {
        cout << s1;
    }
    else {
        cout << s2;
    }
   }
   cout << "it";
    return 0;
}