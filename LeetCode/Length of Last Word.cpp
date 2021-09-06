class Solution {
public:

    // O(N) Time Complexity
    // O(1) Space Complexity
    int lengthOfLastWord(string s)
    {
        int Lastword = 0;
        int Count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                Count = 0;
            }
            else
            {
                Count++;
                Lastword = Count;
            }
        }
        return Lastword;
       
  
    
    }
};
