#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    // floor -> pembulatan ke bawah
    // ceiling -> pembulatan ke atas
    double n, atas, bawah;
    cin >> n;
    bawah = floor(n);
    atas = ceil(n);
    cout << bawah << " " << atas << endl;
    return 0;
}