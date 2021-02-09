#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s, t;
    cin >> s >> t;
    while (s.find(t) < s.length() && s.find(t) >= 0)
        s.erase(s.find(t), t.length());
    cout << s << endl;
    return 0;
}
