#include <iostream>
#include <string>
using namespace std;

void SwapNames(string Names[], int N)
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N-1; j++)
		{
			if (Names[j] > Names[j+1])
			{
				swap(Names[j], Names[j + 1]);
			}
		}
	}
}



int main()
{
	int N;
	cin >> N;
	string *Names = new string[N];
	for (int i = 0; i < N; i++)
	{
		cin >> Names[i];
	}
	SwapNames(Names, N);
	for (int i = 0; i < N; i++)
	{
		cout << Names[i] << " || ";
	}



}
