#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    for(int row=0; row<str.length(); row++){
        for(int col=0; col<=row; col++){
            cout << str[col];
        }
        cout << endl;
    }   
    
    return 0;
}