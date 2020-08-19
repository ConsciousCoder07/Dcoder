#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, l1;
    string s1, s2;
    cin>>t;
    while(t--)
    {
        cin>>s1>>s2;
        l1 = s1.length();
        if(s1.find(s2)>=0 && s1.find(s2)<=l1)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
    }
    return 0;
}