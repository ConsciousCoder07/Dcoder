#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word, result;
    cin >> word;
    
    for(auto ch : word)
        if(result.find(ch)==string::npos) //if character not found in result add it.
            result += ch;
    
    cout << result;
    
    return 0;
}