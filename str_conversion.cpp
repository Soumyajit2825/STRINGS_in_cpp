#include <iostream>
#include<string>
#include<algorithm>
//upper to lower and lower to upper without using function
using namespace std;
int main()
{
    int i;
    string s1="absndhryewlwehfdeuiywewnbe";

    //converting lower case to upper case

    for (i=0;i<s1.size();i++)
    {
        if (s1[i]>='a' && s1[i]<='z')
        {
            s1[i]-=32;
        }
    }
    cout<<"The formatted strin(UPPER) is: "<<s1<<endl;
    //converting upper case to lower case

    for (i=0;i<s1.size();i++)
    {
        if (s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]+=32;
        }
    }
    cout<<"The formatted string(LOWER) is: "<<s1;
    return 0;
}