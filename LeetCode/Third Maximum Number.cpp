class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        long FirstMax = LONG_MIN, SecondMax = LONG_MIN, ThirdMax = LONG_MIN;
        for (int i=0; i<nums.size(); i++)  
        {
            // Check if the current number is already = any max
            // if yes then continue
        if (nums[i] == FirstMax || nums[i] == SecondMax || nums[i] == ThirdMax)
                continue;
            
            if (nums[i] > FirstMax) 
            {
                ThirdMax = SecondMax;
                SecondMax = FirstMax;
                FirstMax = nums[i];
            } else if (nums[i] > SecondMax) 
            {
                ThirdMax = SecondMax;
                SecondMax = nums[i];
            } else if (nums[i] > ThirdMax) 
            {
                ThirdMax = nums[i];
            }
        }
        // If there is not third max then return the first max
        if (ThirdMax == LONG_MIN)
        {
            return FirstMax;
        }
        else
        {
            return ThirdMax;
        }
        //return three == LONG_MIN ? one : three;
    }
};
