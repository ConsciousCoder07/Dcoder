#include <iostream>
using namespace std;

int main()
{
    int sub1, sub2, sub3, avg;
    cin >> sub1 >> sub2 >> sub3;
    avg = (sub1+sub2+sub3)/3;
    if (avg > 90) cout<< "A";
    else if(avg > 80) cout << "B";
    else if (avg > 70) cout << "C";
    else if (avg > 60) cout << "D";
    else cout << "F";
}