#include <iostream>
using namespace std;
#define size 101

int main(int argc, char const *argv[])
{
    int n, num[size], i = 0;
    while (cin >> n)
    {
        num[i] = n;
        i++;
    }
    int cnt = i;
    for (int i = cnt - 1; i >= 0; i--)
        cout << num[i] << endl;

    return 0;
}
