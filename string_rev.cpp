#include <iostream>
#include <string.h>
using namespace std;
void rev(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    rev(ros);
    cout << s[0];
}
int main()
{
    string name;
    cout << "Enter any name: ";
    getline(cin, name);
    cout << "Before reversal: "
         << name;
    cout << "\n";
    cout << "After reversal: ";
    rev(name);
    return 0;
}