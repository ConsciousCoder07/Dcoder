#include <iostream>
using namespace std;

int main()
{
    int n, number;
    cin >> n;
    while(n--){
        cin >> number;
        if( number == 0){
             cout << "No";
             return 0;
        }     
    }
    cout << "Yes";
    return 0;
}