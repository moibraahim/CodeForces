#include <iostream>
using namespace std;

int main()
{
	int k, r;
	cin >> k >> r;
	int Shovel = 1;
	while (true)
	{
		if ((Shovel * k) % 10 == r || (Shovel * k) % 10 == 0)
		{
			break;
		}
		else
		{
			Shovel++;
		}
	
	}

	cout << Shovel << endl;

	
}
