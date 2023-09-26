#include <vector>
#include <algorithm>

using namespace std;
/**
 * Definition of Interval:
 *  */
class Interval {
  public:
      int start, end;
      Interval(int start, int end) {
          this->start = start;
          this->end = end;
      }
  };


class Solution {
public:
    bool canAttendMeetings(vector<Interval> &intervals) {
        // Write your code here
        if (intervals.empty())
        {
            return true;
        }

        sort(intervals.begin(), intervals.end()); // sorting is inplace
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][1] > intervals[i + 1][0])
            {
                return false;
            }
        }
    return true;
    }
};