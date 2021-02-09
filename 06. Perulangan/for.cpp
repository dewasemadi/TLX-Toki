#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, num, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum += num;
    }
    cout << sum << endl;
    return 0;
}
