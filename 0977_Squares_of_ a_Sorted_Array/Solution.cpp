#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int l = 0;
        int r = nums.size() - 1;
        vector<int> res(nums.size());
        int i = r;
        while (l <= r)
        {
            if (abs(nums[l]) <= abs(nums[r]))
            {
                res[i] = nums[r] * nums[r];
                --r;
            }
            else
            {
                res[i] = nums[l] * nums[l];
                ++l;
            }
            --i;
        }
        return res;
    }
};
