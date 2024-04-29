#include <vector>

using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int slow = 0;
        int fast = 1;
        int sum = nums[0];
        int min = 0;

        while (slow < nums.size() && min != 1)
        {
            if (sum < target)
            {
                if (fast == nums.size())
                {
                    break;
                }
                sum += nums[fast++];
            }
            else
            {
                min = min == 0 ? fast - slow : std::min(fast - slow, min);
                sum -= nums[slow++];
            }
        }
        return min;
    }
};
