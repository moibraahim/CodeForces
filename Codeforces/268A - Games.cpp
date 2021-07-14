#include<iostream>
using namespace std;
int main()
{
	int n;
	int Host[1000];
	int Guest[1000];
	int Count = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> Host[i] >> Guest[i];
	}
		
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (Host[i] == Guest[j])
			{
				Count++;
			}
		}
	}
		
	cout << Count << endl;
}
