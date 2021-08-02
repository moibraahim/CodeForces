#include <iostream>
using namespace std;

void sort(int x[], int N)
{
	for (int i = 0; i < N-1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (x[i] > x[j])
			{
				int temp = x[j];
				x[j] = x[i];
				x[i] = temp;
			}
		}
	}
};

int main()
{
	int N;
	cin >> N;
	int x[100];
	for (int i = 0; i < N; i++)
	{
		cin >> x[i];
	}
	sort(x, N);
	for (int i = 0; i < N; i++)
	{
		cout << x[i] << " ";
	}
}
