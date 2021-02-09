#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    // s1.erase(start posisi, panjang string yang akan dihapus)
    s1.erase(s1.find(s2), s2.length());
    // s1.insert(start posisi, string yang ingin disisipkan)
    s1.insert(s1.find(s3) + s3.length(), s4);
    cout << s1 << endl;
    return 0;
}

/*
input----
abcdehalofghi
bcd
halo
semua

output----
aehalosemuafghi
*/