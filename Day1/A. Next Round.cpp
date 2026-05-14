#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, k;
    cin >> t >> k;
    int next = 0;
    int arr[1000];
    for (int i = 1; i <= t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= t; i++)
    {
        if (arr[i] >= arr[k] && arr[i] > 0)
        {

            next++;
        }
    }
    cout << next << endl;

    return 0;
}