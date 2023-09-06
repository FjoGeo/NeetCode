#include <string>
#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> open;
        std::unordered_map<char, char> parens = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };

        for (const& c : s)
        {
            if (parens.find(c) != parens.end())
            {
                if (open.empty()) return false;

                if (open.top() != parens[c]) return false;

                open.pop();
            }
            else
            {
                open.push(c);
            }
        }

        return open.empty();
    }
};