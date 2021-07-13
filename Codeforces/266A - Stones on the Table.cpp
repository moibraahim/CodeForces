#include <iostream>
using namespace std;

int main()
{
    int n;
    string Stones;
    int count = 0;
    cin >> n >> Stones;
    for (int i = 0; i < n; i++)
    {
        if (Stones[i] == Stones[i + 1])
        {
            count++;
        }
    }
    cout << count << endl;
}