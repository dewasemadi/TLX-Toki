#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] < 'a')
            // non kapital
            s[i] += 'a' - 'A';
        else
            // kapital
            s[i] -= 'a' - 'A';
    }
    cout << s << endl;
    return 0;
}

/*
input----
SuperVinHebat

output----
sUPERvINhEBAT
*/