#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int i = 0;
    string str;
    //Input the entire line as string
    getline(cin, str);
    //Used for breaking input into words 
    stringstream ss(str);
    //Read using stringstream instead of cin
    while(ss >> str) //getline(ss, str, " ")
    {
        str[i] = toupper(str[i]);
        cout << str << " " ;
    }
    
    return 0;
}