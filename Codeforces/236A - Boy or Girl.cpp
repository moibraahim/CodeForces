#include <iostream>
using namespace std;

int main()
{
	string s; 
	cin >> s;
	int count = 0;
	int flag = 0;
	for (int i = 0; i < s.length()-1; i++)
	{
		flag = 1;
		for (int j = i + 1; j < s.length(); j++)
		{
			if (s[j] == s[i])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
		}
		
	}
	if (count % 2 != 0)
	{
		cout << "CHAT WITH HER!" << endl;
	}
	else
	{
		cout << "IGNORE HIM!" << endl;
	}
}
