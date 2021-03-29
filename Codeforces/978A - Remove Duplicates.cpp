#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int *pA;
	pA = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> pA[i];
	}

	int count = 0;
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		flag = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (pA[i] == pA[j])
			{
				count++;
				flag = 1;
				break;
			}
		}
		
	}
	cout << n - count << endl;
	for (int i = 0; i < n; i++)
	{
		flag = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (pA[i] == pA[j])
			{
				flag = 1;
				break;
			}

		}
		if (flag != 1)
		{
			cout << pA[i] << " ";
		}
	}

	
	
}