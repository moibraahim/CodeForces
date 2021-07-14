#include <iostream>
#include <string>
using namespace std;


int main()
{
    int Count = 0;
    char Start = 'a';
    string s;
    cin >> s;
  
    for (int i = 0; i < s.size(); i++) 
    {
        int dif = abs(s[i] - Start);
        int mini = min(dif, 26 - dif);
        Count += mini;
        Start = s[i];
    }
    cout << Count << endl;
	
	
}
