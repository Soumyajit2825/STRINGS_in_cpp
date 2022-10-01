#include <iostream>
using namespace std;
//merging or joining of 2 strings
int main()
{
    string s1="sou";
    string s2="mya";

    s1.append(s2);
    //or cout<<s1+s2<<endl;
    //both are applicable for merging 2 strings
    cout<<s1<<endl;
    return 0;
}