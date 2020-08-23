#include <iostream>
using namespace std;

int main()
{
    string req, userVersion;
    
    cin >> req >> userVersion;
    
    if(userVersion >= req)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}