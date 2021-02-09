#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int k, len;
    cin >> s >> k;

    len = s.length();
    for (int i = 0; i < len; i++)
    {
        int ord = (s[i] - 'a');
        int encrypted = (ord + k) % 26;
        s[i] = encrypted + 'a';
    }
    cout << s << endl;
    return 0;
}