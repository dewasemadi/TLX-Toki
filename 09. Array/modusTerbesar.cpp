#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, inp, ans = -1, ansNum;
    map<int, int> freq;
    cin >> n;
    while (n--)
    {
        cin >> inp;
        freq[inp]++;
        if (freq[inp] > ans)
        {
            ans = freq[inp];
            ansNum = inp;
        }
        else if (freq[inp] == ans)
            ansNum = (ansNum < inp) ? inp : ansNum;
    }
    cout << ansNum << endl;
    return 0;
}