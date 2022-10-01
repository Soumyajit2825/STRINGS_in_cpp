#include <iostream>
#include<string>
#include<algorithm>
//upper to lower and lower to upper using function
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string: \n";
    getline(cin,str);
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    return 0;
}