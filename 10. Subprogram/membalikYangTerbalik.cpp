#include <iostream>
#include <cmath>
using namespace std;

int balik(int num)
{
    int temp = num, ret = 0;
    while (temp > 0)
    {
        ret = (ret * 10) + (temp % 10);
        temp = floor(temp / 10);
    }
    return ret;
}

int main(int argc, char const *argv[])
{
    int a, b, result;
    cin >> a >> b;
    a = balik(a);
    b = balik(b);
    result = a + b;
    result = balik(result);
    cout << result << endl;
    return 0;
}
