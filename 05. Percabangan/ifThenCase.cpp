#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if (n >= 0 && n < 10)
        cout << "satuan" << endl;
    else if (n < 100)
        cout << "puluhan" << endl;
    else if (n < 1000)
        cout << "ratusan" << endl;
    else if (n < 10000)
        cout << "ribuan" << endl;
    else if (n < 100000)
        cout << "puluhribuan" << endl;
    return 0;
}
