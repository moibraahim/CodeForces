#include <iostream>
using namespace std;


int main()
{
	int n, h;
	int x[10000];

	cin >> n >> h;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (x[i] <= h)
		{
			sum += 1;
		}
		if (x[i] > h)
		{
			sum += 2;
		}
	}

	cout << sum << endl;
}
