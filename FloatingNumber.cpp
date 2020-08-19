#include <iostream>
#include <iomanip>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int t;
    float n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<fixed<<setprecision(2)<<n<<"\n";
    }
    return 0;
}