#include <iostream>
using namespace std;

int main()
{
    int a, b, sisa, masing;
    cin >> a >> b;
    masing = a / b;
    sisa = a % b;
    cout << "masing-masing " << masing << endl;
    cout << "bersisa " << sisa << endl;
    return 0;
}