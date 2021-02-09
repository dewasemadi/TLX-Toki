#include <iostream>
#include <string>
using namespace std;

bool isPalRec(string str, int s, int e)
{
    if (s == e)
        return true;
    if (str[s] != str[e])
        return false;
    if (s < e + 1)
        return isPalRec(str, s + 1, e - 1);
    return true;
}

bool isPalindrome(string s)
{
    int n = s.length();
    if (n == 0)
        return true;
    return isPalRec(s, 0, n - 1);
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    if (isPalindrome(s) == true)
        cout << "YA" << endl;
    else
        cout << "BUKAN" << endl;
    return 0;
}
