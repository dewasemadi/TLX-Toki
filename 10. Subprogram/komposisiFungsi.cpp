#include <iostream>
#include <cmath>
using namespace std;

// rekursif
int func(int a, int b, int k, int x)
{
    k--;
    int result = 0;
    result = abs(a * x + b);

    if (k >= 1)
        return func(a, b, k, result);
    return result;
}

int main(int argc, char const *argv[])
{
    int a, b, k, x;
    cin >> a >> b >> k >> x;
    // fx = |ax + b|
    cout << func(a, b, k, x) << endl;

    return 0;
}