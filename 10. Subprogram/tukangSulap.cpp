#include <iostream>
#include <algorithm>
using namespace std;
#define size 1001

int main()
{
    int n, X, num[2][size];
    cin >> n;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < n; j++)
            cin >> num[i][j];

    cin >> X;
    for (int i = 0; i < X; i++)
    {
        char buff1[5], buff2[5];
        int x, y;
        cin >> buff1 >> x >> buff2 >> y;

        int p = buff1[0] - 'A';
        int q = buff2[0] - 'A';

        x--;
        y--;
        swap(num[p][x], num[q][y]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num[i][j];
            if (j + 1 < n)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}