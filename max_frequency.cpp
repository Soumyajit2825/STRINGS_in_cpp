#include <iostream>
#include <string>
#include <algorithm>
// finding the most occuring alphabet in a string
using namespace std;
int main()
{
    string s;
    cout << "Enter any string: ";
    cin >> s;
    int frq[26];
    int i = 0;
    for (i = 0; i < 26; i++)
    {
        frq[i] = 0;
    }
    for (i = 0; i < s.size(); i++)
    {
        frq[s[i] - 'a']++;
    }
    char ans = 'a';
    int max_f = 0;
    for (i = 0; i < 26; i++)
    {
        if (frq[i] > max_f)
        {
            max_f = frq[i];
            ans = i + 'a';
        }
    }
    cout << "Maximum frequency is: " << max_f << "\nThe alphabet is: " << ans << endl;
    return 0;
}