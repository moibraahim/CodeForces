#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, K;
	cin >> N;
	cin >> K;
	int x[100];
	for (int i = 0; i < N; i++)
	{
		cin >> x[i];
	}

	int count = 0;
	int i;
	for (i = 0; i < N; i++)
	{
		if (x[i] <= K)
		{
			count++;

		}
		else
		{
			break;
		}
	}

	// if left most is good till the end 
	// no need to start from right most
	if (i == N)
	{
		cout << count << endl;
		return 0;
	}


	for (int j = N - 1; j > 0; j--)
	{


		if (x[j] <= K)
		{
			count++;
		}
		else
		{
			break;
		}
	}

	cout << count << endl;


}


	
