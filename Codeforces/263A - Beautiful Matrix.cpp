#include <iostream>
using namespace std;


int main()
{
	int x[5][5];
	int posR, posC;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> x[i][j];
			if (x[i][j] == 1)
			{
				posR = i;
				posC = j;
			}
		}
	}

	
	int count = 0;
	while (true)
	{
		
		if (posR == 2 && posC == 2)
		{
			break;
		}
		if (posR > 2)
		{
			posR--;
			count++;
		}
		if (posC > 2)
		{
			posC--;
			count++;
		}
		if (posR < 2)
		{
			posR++;
			count++;
		}
		if (posC < 2)
		{
			posC++;
			count++;
		}
		
	}

	cout << count << endl;
}
