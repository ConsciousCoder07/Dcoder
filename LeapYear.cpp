#include<iostream>
using namespace std;

int main()
{
    int t, y;
    cin>>t;
    while(t--)
    {
        //Leap year is a year divisible by 4 or 400 and not divisible by 100
        cin>>y;
        if((y%4==0 && y%100!=0) || y%400==0)
            cout<<"Yes"<<endl;
        else 
            cout<<"No"<<endl;
    }
    return 0;
}
