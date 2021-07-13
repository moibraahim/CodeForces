#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int Free = 0;
	int untreated = 0;
	int Hired;
	for (int i = 0; i < n; i++) {
		cin >> Hired;
		if (Hired > 0)
		{
			Free += Hired;

		}
		else
		{
			if (Free < 1) 
			{
				untreated++;
			}
			else 
			{
				Free--;
			}
		}
	}
	cout << untreated << endl;

	
	
}