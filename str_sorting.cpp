#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s1= "xyzhkldhauyeraohdlahdoiwuepwo";
    sort(s1.begin(),s1.end());
    cout<<"sorted string is: "<<s1<<endl;
    return 0;
}