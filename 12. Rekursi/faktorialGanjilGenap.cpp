#include <iostream>
using namespace std;

int factorial(int num)
{
    if (num == 1)
        return 1;
    else if (num % 2 == 0)
        return num / 2 * factorial(num - 1);
    else
        return num * factorial(num - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
