class Solution {
public:
    int lengthOfLastWord(string s) {
        int TestCount = 0;
        int RealCount = 0;
        for (int i=0; i<= s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' )
            {
                TestCount++;
                
            }
            else
            {
                if (TestCount > 0)
                {
                     RealCount = TestCount;
                }
                
                TestCount = 0;
               
            }
           
        }
        
        return RealCount;
    }
};
