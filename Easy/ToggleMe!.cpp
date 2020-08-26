#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int i;
    string str;
    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
        if(islower(str[i]))
           str[i] = toupper(str[i]);
        else if(isupper(str[i]))
           str[i] = tolower(str[i]);
        cout << str[i];
    }
    return 0;
}