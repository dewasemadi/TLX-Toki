#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string txt;
    while (getline(cin, txt))
        cout << txt << endl;
    return 0;
}
