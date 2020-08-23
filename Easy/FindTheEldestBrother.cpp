#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age[5];
    for(int i=0; i<5; i++)
        cin >> age[i];
    cout << *max_element(age, age+5);
    return 0;
}