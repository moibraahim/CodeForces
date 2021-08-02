#include <iostream>
using namespace std;


int main()
{
	int a, b;
	int count = 0;
	cin >> a >> b;
	while (true)
	{
		count++;
		a *= 3;
		b *= 2;
		if (a > b)
		{
			break;
		}
		
	}

	cout << count << endl;
}
