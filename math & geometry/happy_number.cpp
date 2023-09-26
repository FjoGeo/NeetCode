#include <unordered_set>

class Solution {
public:
    bool isHappy(int n) {
        std::unordered_set<int> seen;
        while (n != 1) {
            // if number is not found find() will return end()
            if (seen.find(n) != seen.end()) {
                return false;
            }
            seen.insert(n);
            n = square_sum(n);
        }
        return true;
    }

private:
    int square_sum(int n) {
        int sum = 0;
        while (n) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
};