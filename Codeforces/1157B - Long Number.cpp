#include<iostream>
using namespace std;

int main()
{
	int f[10];
	int n, a;
	string s;
	cin >> n >> s;
	f[0] = 0;
	for (int i = 1; i <= 9; i++)
	{
		cin >> f[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (f[s[i] - '0'] > s[i] - '0') {
			int j = i;
			while (f[s[j] - '0'] >= s[j] - '0')
			{
				s[j] = f[s[j] - '0'] + '0';
				j++;
			}
			break;
		}
	}
	cout << s << endl;
	
}