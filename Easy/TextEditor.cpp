#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    while(n--)
    {
        cin >> str;
        
        for(int i=0; i<str.size(); i++)
            str[i] = toupper(str[i]);
        
        cout << str << endl;
    }
    return 0;
    
    /*
    
    Alternative 1:

    cout << strupr(str) << endl;
    
    
    Alternative 2:

    for(int i=0; i<str.size(); i++)
        str[i] -= 32;
    cout << str << endl;
    
    */
}