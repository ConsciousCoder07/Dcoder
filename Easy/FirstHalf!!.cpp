#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for(int i=0; i<str.length()/2; i++)
        cout << str[i];
    
    return 0;
}