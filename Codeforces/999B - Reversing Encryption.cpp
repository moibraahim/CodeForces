#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	
	string x;
	int N;
	cin >> N;
	cin >> x;


	for (int i = 1; i<= N; i++)
	{
	
		if (N % i == 0)
		{
			reverse(x.begin(), x.begin() + i);

		}

	}
	
	cout << x << endl;
	
	
	
	
	
	





}