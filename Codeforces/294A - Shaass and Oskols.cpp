#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int x[100 + 2];
    int Wi, Bi;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    cin >> m;
    while (m--)
    {
        cin >> Wi >> Bi;
        x[Wi - 1] += (Bi - 1);
        x[Wi + 1] += (x[Wi] - Bi);
        x[Wi] = 0;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << x[i] << endl;
    }
   
}
