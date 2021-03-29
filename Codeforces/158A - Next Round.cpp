#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int x[50];

	for (int i = 1; i <= n; i++)
	{
		cin >> x[i];
	
	}
	int Nparticipant = 0;
	for (int i = 1; i <= n; i++)
	{
		if (x[i] >= x[k] && x[i] > 0)
		{
			Nparticipant++;
		}
	}

	cout << Nparticipant << endl;

}