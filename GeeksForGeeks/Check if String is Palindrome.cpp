#include <iostream>
using namespace std;
bool CheckPalindrome(string S)
{

	// Convert All Letters to Lower Case
	for (int i = 0; i < S.length(); i++)
	{
		S[i] = tolower(S[i]);
	}
	int j = S.length() - 1;
	bool IsPalindrome = 1;
	for (int i = 0; i < S.length(); i++)
	{

		if (S[i] != S[j])
		{
	
			IsPalindrome = 0;
			break;
		}
		j--;
	}
	return IsPalindrome;
}
int main()
{
	string S;
	cin >> S;

	if (CheckPalindrome(S))
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}
