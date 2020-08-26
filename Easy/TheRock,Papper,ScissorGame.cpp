#include <iostream>
using namespace std;

int main()
{
	int turns;
	string str;
	cin >> turns >> str;

	for (int turn = 0; turn < turns*2-1; turn += 2) {
        
        char D = str[turn]; 
        char Y = str[turn+1];
		if (D == Y) 
			cout << "Draw" << endl;
        else if( (D=='P' && Y=='R') || (D=='S' && Y=='P') || (D=='R' && Y=='S'))
            cout << "Dcoder" << endl;
        else
            cout << "You" << endl;   
	}
    
    return 0;
}