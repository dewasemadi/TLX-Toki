#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    unsigned int n, num;
    cin >> n;
    while (n--)
    {
        cin >> num;
        bool cek = true;

        if (num == 1)
            cek = false;

        for (int i = 2; i <= trunc(sqrt(num)); i++)
        {
            if (num % i == 0)
                cek = false;
        }

        if (cek)
            cout << "YA" << endl;
        else
            cout << "BUKAN" << endl;
    }
    return 0;
}
