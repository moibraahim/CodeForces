#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	int n, b, d;
	long long int  x[110000];
	int  count = 0;
	cin >> n >> b >> d;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	long long int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (x[i] <= b)
		{
			sum += x[i];
		}
		if (sum > d)
		{
			sum = 0;
			count++;
		}
	}

	cout << count << endl;


}
