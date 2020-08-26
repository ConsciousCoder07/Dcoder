#include <iostream>
using namespace std;

int main()
{   
    int i, n = 5; //string length
    string str;
    cin >> str;
    for( int i=0; i<n/2; i++){
        if(str[i]!=str[n-1-i]){
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}