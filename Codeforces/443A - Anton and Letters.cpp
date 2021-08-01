#include <iostream>
#include <string>
using namespace std;


int main()
{
	string t;
	getline(cin,t);
	int count = 0;
	int flag = 0;
	for (int i = 0; i < t.length(); i++)
	{
		flag = 0;
		if (t[i] >= 'a' && t[i] <= 'z')
		{
			for (int j = i+1; j < t.length(); j++)
			{
				if (t[i] == t[j])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				count++;
			}
			
		}
	}
	cout << count << endl;

}
