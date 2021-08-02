#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string x;
	cin >> x;
	int y[100];
	int j = 0;
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] != '+')
		{
			y[j++] = x[i] - '0';
		}
	}

	sort(y, y + j);
	for (int i = 0; i < j; i++)
	{
		cout << y[i];
		if (i < j - 1)
		{
			cout << "+";
		}
	}


	
}
