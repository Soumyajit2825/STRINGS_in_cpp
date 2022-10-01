#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s1="2825";
    cout<<s1<<endl;
    int s = stoi(s1);//changing string to integer
    cout<<s+3<<endl;

    return 0;
}