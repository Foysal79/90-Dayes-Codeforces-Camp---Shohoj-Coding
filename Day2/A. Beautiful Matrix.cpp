#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[6][6];
    int index_row, index_column;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> ar[i][j];
            if (ar[i][j] == 1)
            {
                index_row = i;
                index_column = j;
            }
        }
    }

    cout << abs(3 - index_column) + abs(3 - index_row) << endl;

    return 0;
}
