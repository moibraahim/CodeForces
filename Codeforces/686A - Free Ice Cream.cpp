#include <iostream>
#include <string>
using namespace std;


int main()
{
	long long int n, x, Count;
	long long int Total;
	long long int  Number;
	Count = 0;
	char Operation;

	cin >> n >> x;
	Total = x;
	for (int i = 0; i < n; i++)
	{
		cin >> Operation >> Number;
		if (Operation == '+')
		{
			Total += Number;
		}
		if (Operation == '-')
		{
			if (Total >= Number)
			{
				Total -= Number;
			}
			else
			{
				Count++;
			}
		}
	
	}
	cout << Total << " " << Count << endl;

}
