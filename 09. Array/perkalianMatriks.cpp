#include <iostream>
#define size 100
using namespace std;

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int X[n][m], Y[m][p]; //menyesuaikan dengan size
    // matriks A
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> X[i][j];

    // matriks B
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            cin >> Y[i][j];

    int mul[n][p];
    // perkalian
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < p; ++j)
            mul[i][j] = 0;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < p; ++j)
            for (int k = 0; k < m; ++k)
                mul[i][j] += X[i][k] * Y[k][j];

    // cetak hasil n x p
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
            cout << mul[i][j] << " ";
        cout << "\n";
    }
    return 0;
}