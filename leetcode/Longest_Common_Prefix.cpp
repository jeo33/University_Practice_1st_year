/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
  */

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs)
        {
            int size = 200;
            string t;

            for (string s : strs)
            {
                if (s.empty())return "";
                if (size > s.size())
                {
                    size = s.size();
                    t = s;
                }

            }

            int i = 0;
            int falg=0;
            for (char z : t)
            {
                for (string s : strs)
                {
                    if (z == s.at(i))
                        continue;
                    else 
                    {   falg=1;
                        break;}

                }
                
                if(falg==0)i++;
                else break;
            }
            return i==0?"":t.substr(0, i);


        }

    };
