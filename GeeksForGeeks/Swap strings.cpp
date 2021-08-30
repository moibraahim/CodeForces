#include <iostream>
#include <string>
using namespace std;


void SwapString(string &S1 , string &S2)
{
	// Swap Pointers
	string Temp;
	Temp = S1;
	S1 = S2;
	S2 = Temp;
		
}

int main()
{
	string S1, S2;
	getline(cin, S1);
	getline(cin, S2);
	SwapString(S1, S2);
	cout << S1 << " " <<  S2 << endl;


}
