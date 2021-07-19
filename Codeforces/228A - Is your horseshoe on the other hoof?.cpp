#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	long long int x[4];
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> x[i];
	}
	sort(x, x + 4);
	for (int i = 0; i < 3; i++)
	{
		if (x[i] == x[i + 1])
		{
			count++;
		}
	}
	cout << count << endl;
}
