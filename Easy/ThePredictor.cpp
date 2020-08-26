#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int count = 0;
    string str;
    cin >> str;
    
   if( str.find("111111") != string::npos || str.find("000000") != string::npos)
       cout << "Bad\n";
   else
       cout << "Good\n";
        
    return 0;   
}