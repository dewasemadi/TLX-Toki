#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, div, result;
    map<int, int> freq;
    cin >> num;
    while (1)
    {
        if (num == 1)
            break;
        div = 2;
        while (num > 1)
        {
            if (num % div == 0)
            {
                num /= div;
                freq[div]++;
            }
            else
                div++;
        }
    }

    map<int, int>::iterator p;
    for (p = freq.begin(); p != freq.end(); p++)
    {
        if (p->second > 1)
            cout << p->first << "^" << p->second;
        else
            cout << p->first;

        // cek tanda silang
        if (p != prev(freq.end()))
            cout << " x ";
        else
            cout << endl;
    }
    return 0;
}
