#include <string>
#include <unordered_map>

class Solution {
public: 
    bool isAnagram(std::string s, std::string t)
    {
        if (t.size() != s.size()) return false;

        std::unordered_map<char, int> tmap;
        std::unordered_map<char, int> smap;

        for (int i = 0; i < s.size(); i++)
        {
            tmap[s[i]]++;
            smap[t[i]]++;
        }

        for (int i = 0; i < smap.size(); i++)
        {
            if (smap[i] != tmap[i]) return false;
        }
        return true;
    }



};