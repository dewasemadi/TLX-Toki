#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
            cout << "*";
        else
            cout << i;

        // cetak spasi
        if (i != n)
            cout << " ";
    }
    return 0;
}
