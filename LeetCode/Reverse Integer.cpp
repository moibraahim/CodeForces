class Solution {
public:
int reverse(int x) 
{
    long long int reversedNumber = 0, remainder;
    while (x != 0)
    {
        remainder = x % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        x /= 10;
    }
    if (reversedNumber > 2147483647 || reversedNumber < -2147483648)
    {
        return 0;
    }
    else
    {
        return reversedNumber;

    }
  
}
	
        
};
