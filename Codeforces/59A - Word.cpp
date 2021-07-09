#include <iostream>
using namespace std;

int main()
{

	// if L  == U then all Lower
	string word;
	cin >> word;

	int Lcount = 0;
	int Ucount = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] >= 97 && word[i] <= 122)
		{
			Lcount++;
		}
		if (word[i] >= 65 && word[i] <= 92)
		{
			Ucount++;
		}
	}

	if (Ucount == Lcount)
	{
		// Converting All to Lower
		for (int i = 0; i < word.length(); i++)
		{
			if (word[i] >= 65 && word[i] <= 92)
			{
				word[i] = word[i] + 32;
			}
		}
	}
	if (Ucount > Lcount)
	{
		for (int i = 0; i < word.length(); i++)
		{
			if (word[i] >= 97 && word[i] <= 122)
			{
				word[i] = word[i] - 32;
			}
		}
	}
	if (Lcount > Ucount)
	{
		for (int i = 0; i < word.length(); i++)
		{
			if (word[i] >= 65 && word[i] <= 92)
			{
				word[i] = word[i] + 32;
			}
		}
	}

	cout << word << endl;




}