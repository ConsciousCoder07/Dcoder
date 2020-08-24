#include <iostream>
using namespace std;

int main()
{
    string binary;
    cin >> binary;
    for(int i=0; i<binary.length(); i++){
        if(binary[i]=='0')
            binary[i]='1';
        else if(binary[i]=='1')
            binary[i]='0';
    }
    cout << binary;
    return 0;
}