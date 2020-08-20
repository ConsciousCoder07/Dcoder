#include <iostream>
#include <string>
using namespace std;


int main()
{
    int n, wordCount = 0;
    string word;
    cin >> n;
    while( n-- )
    {   
        cin >> word;
        wordCount++;
        if(word.compare("Nemo") == 0)
            cout << wordCount;               
    }   
    
    return 0;
}