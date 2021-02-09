#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;
    for (int i = num; i >= 1; i--)
    {
        if (num % i == 0)
            cout << i << endl;
    }
    return 0;
}
