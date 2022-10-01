#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "soumya";
    s1.insert(0,"sou");
    cout<<s1<<endl;
    cout<<s1.size()<<endl;//find the length of the string
    string s = s1.substr(0,3);
    cout<<s<<endl;//print a part of string or substring
    return 0;
}