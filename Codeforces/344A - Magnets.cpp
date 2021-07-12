#include <iostream>
using namespace std;

int main()
{

	int n;
	long long int  x[100000];
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}

	int count = 1;
	for (int i = 0; i < n - 1; i++)
	{
		if (x[i] != x[i + 1])
		{
			count++;
		}
	}

	cout << count << endl;




}