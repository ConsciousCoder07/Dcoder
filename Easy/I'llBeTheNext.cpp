#include <iostream>
using namespace std;

int main()
{
   string str; 
   cin >> str;
   for ( auto ch : str)
   {
     ch += 1;
     cout << ch;
   }
}