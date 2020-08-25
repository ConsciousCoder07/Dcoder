#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int count = 0;
    string str;
    getline(cin, str);
    //To break the input in words 
    stringstream ss(str);
    //Using stringstream instead of cin to read
    while(ss >> str)
    {
        for(auto ch : str)
        {
            if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
                count++;
        }
    }
    cout << count;
    return 0;
}