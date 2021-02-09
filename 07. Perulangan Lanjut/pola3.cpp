#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, num = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
                cout << num++;
            // balikin num = 0 kalo num udah 10
            if (num == 10)
                num = 0;
        }
        cout << endl;
    }
    return 0;
}
