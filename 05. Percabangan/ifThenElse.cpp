#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if (n > 0)
        cout << "positif" << endl;
    else if (n < 0)
        cout << "negatif" << endl;
    else
        cout << "nol" << endl;
    return 0;
}
