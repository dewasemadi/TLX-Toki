#include <iostream>
#include <string>
using namespace std;
#define size 255

string cek = "_";
void camelCase(string *temp)
{
    string s = *temp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 'a' - 'A';
            s.insert(i, "_");
        }
    }
    *temp = s;
}

void snakeCase(string *temp)
{
    string s = *temp;
    int cnt = 0, pos[size], len = s.length(), loc = s.find(cek);

    while (loc >= 0 && loc < len)
    {
        pos[cnt] = loc;
        cnt++;
        s.erase(loc, 1);
        loc = s.find(cek);
        len = s.length();
    }

    for (int i = 0; i < cnt; i++)
    {
        if (pos[i] <= s.length())
            s[pos[i]] -= 32;
    }
    *temp = s;
}

int main()
{
    string s, *temp;
    cin >> s;
    temp = &s;

    if (s.find(cek) >= 0 && s.find(cek) < s.length())
        snakeCase(temp);
    else
        camelCase(temp);

    cout << s << endl;
    return 0;
}
