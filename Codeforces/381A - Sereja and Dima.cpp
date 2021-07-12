#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int n;
	int x[1000];
	int ser = 0, dem = 0;
	int Left = 0, Right = 0;

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> x[i];
	}
	Left = 1;
	Right = n;
	for (int i = 1; i <= n; ++i) {
		if (i % 2 == 1)
		{
			if (x[Left] > x[Right])
			{
				ser += x[Left];
				Left++;
			}
			else
			{
				ser += x[Right];
				Right--;
			}
		}
		else
		{
			if (x[Left] > x[Right])
			{
				dem += x[Left];
				Left++;
			}
			else
			{
				dem += x[Right];
				Right--;
			}
		}
	}
	cout << ser << " " << dem << endl;
}