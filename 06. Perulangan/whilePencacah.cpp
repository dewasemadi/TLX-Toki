#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, sum = 0;
    while (cin >> n)
        sum += n;
    cout << sum << endl;
    return 0;
}
