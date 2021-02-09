#include <iostream>
using namespace std;

int komp(int a, int b, int k, int x)
{
    if (k == 0)
        return x;
    else
        return abs(a * komp(a, b, k - 1, x) + b);
}

int main(int argc, char const *argv[])
{
    int a, b, k, x;
    cin >> a >> b >> k >> x;
    cout << komp(a, b, k, x) << endl;
    return 0;
}