class Solution {
public:
    int strStr(string haystack, string needle) {
        int Hay_Size = haystack.length();
        int Needle_Size = needle.length();

        for (int i = 0;i <= Hay_Size-Needle_Size; i++)
        {
            int j = 0;
            for (;j < Needle_Size; j++)
            {
             if (haystack[i+j] != needle[j] )
             {
                 break;
             }
            }
            if (j == Needle_Size)
            {
                return i;
            }
        }
        
        return -1;
    }
};
