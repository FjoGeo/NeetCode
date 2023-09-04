#include <string>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int l = 0;
        int r = s.size() - 1;


        while (l < r)
        {
            while (l < r && !isalnum(s[l]))
            {
                l++;
            }
            while (r > l && !isalnum(s[r]))
            {
                r--;
            }
            if (tolower(s[l]) != tolower(s[r]))
            {
                return false;
            }
            l++;
            r--;
        }

        return true;


    }
};