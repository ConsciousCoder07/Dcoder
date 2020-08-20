#include <iostream>
using namespace std;

int main()
{
    int i;
    string str;
    int panagramCheck[26]; //to track all the alphabets
    getline(cin, str);
    
    
    for(i=0; i<26; i++)
        panagramCheck[i] = 0;
    
    int index;
    for(i=0; i<str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            index = str[i] - 'A'; //to get the index 
        else if(str[i] >= 'a' && str[i] <= 'z')
            index = str[i] - 'a'; //to get the index
        else
            // skip to next iteration if character isn't alphabet
            continue;
        
        //if character is present 
        panagramCheck[index] = 1;
    }    
    
    for(i = 0; i < 26; i++){
        if(!panagramCheck[i]){
            // if not 1 i.e. all alphabets are not present then
             cout << "NO";
            // end the program
            return 0;
        }
     }
    
    cout << "YES";
    
    return 0;            
}