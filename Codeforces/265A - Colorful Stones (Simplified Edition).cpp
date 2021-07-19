#include <iostream>
using namespace std;


int main()
{
	string s;
	string t;
	cin >> s;
	cin >> t;
	
	int j = 0;
	
	for (int i = 0; i < t.length(); i++)
	{
		if (t[i] == s[j])
		{
			j++;
		}
	}
	cout << j + 1 << endl;
}
