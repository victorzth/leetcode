#include <vector>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            int n = nums[mid];
            if (n == target)
            {
                return mid;
            }
            else if (n > target)
            {
                r = --mid;
            }
            else
            {
                l = ++mid;
            }
        }
        return -1;
    }
};
