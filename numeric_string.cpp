#include <iostream>
#include <string>
#include <algorithm>
// form the biggest number from the numeric string
using namespace std;
int main()
{
    string s;
    cout << "Enter any number: ";
    cin >> s;
    sort(s.begin(), s.end(), greater<int>()); // forming the greatest number using the input
    cout << "Greatest number formed: " << s << endl;
    return 0;
}