#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;
        if (m % n != 0) 
        {
            cout << -1 << endl;
            return 0;
        }
        if (n == m) 
        {
            cout << 0 << endl;
        }
        else
        {
            int k = m / n; 
            int count = 0;
            while (k % 2 == 0) 
            {
                count++;
                k /= 2;
            }
            while (k % 3 == 0) 
            {
                count++;
                k /= 3;
            }
            if (k != 1) 
            {
                cout << -1 << endl;
            }
            else 
            {
                cout << count << endl;
            }
        }
    }
