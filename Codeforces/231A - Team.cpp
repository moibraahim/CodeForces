#include <iostream>
using namespace std;
int main()
{
	int N = 0,Petya = 0,Vasya = 0,Tonya = 0;
	int count = 0;
	cin >> N;
	while (N--)
	{
		cin >> Petya >> Vasya >> Tonya;
		if (Petya + Vasya + Tonya >= 2)
		{
			count += 1;
		}
	}
	cout << count << endl;
}
