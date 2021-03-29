#include <iostream>
using namespace std;

int main()
{
	string s;
	int T;
	cin >> T;
	
	while (T--)
	{
		cin >> s;
		if (s.length() > 10)
		{
			cout << s[0] << s.length()- 2 << s[s.length() - 1];
		}
		else
		{
			cout << s;
		}
		cout << endl;
	}

}