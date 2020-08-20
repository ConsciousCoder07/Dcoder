#include <iostream>
using namespace std;

int main()
{
    int n, i;
    string word;
    cin >> n;
    while(n--)
    {
        cin >> word;
        for(i = 0; i < word.length() ; i++){
            
            //if(word[i] >= '0' && word[i] <= '9')
            if(isdigit(word[i]))
                cout << word[i] << " ";
        }
    }
    return 0;
}