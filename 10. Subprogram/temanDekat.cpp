#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;
#define size 1000

int main(int argc, char const *argv[])
{
    int n, d, num, x[size], y[size], result, max = INT_MIN, min = INT_MAX;
    cin >> n >> d;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            result = pow(abs(x[i] - x[j]), d) + pow(abs(y[i] - y[j]), d);
            if (result > max)
                max = result;
            if (result < min)
                min = result;
        }
    }
    cout << min << " " << max << endl;
    return 0;
}