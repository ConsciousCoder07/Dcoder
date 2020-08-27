#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if(a.find(b) != string::npos)
        cout << '1';
    else 
        cout << '0';
    
    return 0;
}