#include <iostream>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int counta = 0, countb = 0;
	// convert 
	for (int i = 0; i < a.length(); i++)
	{
		a[i] = tolower(a[i]);
	}
	for (int i = 0; i < b.length(); i++)
	{
		b[i] = tolower(b[i]);
	}
	for (int i = 0; i < a.length(); i++)
	{
		counta += (int)a[i];
	}
	for (int i = 0; i < b.length(); i++)
	{
		countb += (int)b[i];
	}
	if (a < b)
	{
		cout << -1 << endl;
	}
	if (b < a)
	{
		cout << 1 << endl;
	}
	if (a == b)
	{
		cout << 0 << endl;
	}
	
}
