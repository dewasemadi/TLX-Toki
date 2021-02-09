#include <iostream>
#include <limits.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, num, max = INT_MIN, min = INT_MAX;
    cin >> n;
    while (n--)
    {
        cin >> num;
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    cout << max << " " << min << endl;
    return 0;
}
