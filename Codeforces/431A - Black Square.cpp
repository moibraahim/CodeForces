#include <iostream>
using namespace std;

int main()
{
	int x[5];
	x[0] = 0;
	string s;
	int sum = 0;
	for (int i = 1; i <= 4; i++)
	{
		cin >> x[i];
	}
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		sum += x[s[i] - '0'];
	}
	cout << sum << endl;
}
