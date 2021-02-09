#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, t, luas;
    cin >> a >> t;
    luas = (a * t) / 2;
    printf("%.2f", luas);
    return 0;
}