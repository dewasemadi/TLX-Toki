#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, num;
    cin >> n;
    while (n--)
    {
        cin >> num;
        int start = 3, cek = 0;
        if (num % 2 == 0 && num != 2 || num == 1)
            cek++;
        for (int i = start; i <= trunc(num / 2); i++)
        {
            if (num % start == 0)
            {
                cek++;
                if (cek > 2)
                    break;
            }
            start++;
        }

        if (cek <= 2)
            cout << "YA" << endl;
        else
            cout << "BUKAN" << endl;
    }
    return 0;
}
