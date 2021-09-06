class Solution
{
public:
    
      // O(N) Time Complexity
      // O(1) Space Complexity
    vector<string> fizzBuzz(int n)
    {
       vector<string> answer(n);
       string ch;


        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                answer[i-1]= "FizzBuzz";
            }
            else if (i % 3 == 0)
            {
                answer[i - 1] = "Fizz";
            }
            else if (i % 5 == 0)
            {
                answer[i - 1] = "Buzz";
            }
            else if (i % 3 != 0 && i % 5 != 0)
            {
                answer[i - 1] = to_string(i);
            }

        }
        return answer;
    }

};
