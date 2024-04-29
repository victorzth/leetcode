#include <vector>
#include <iostream>

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

int main()
{
    Solution *solution = new Solution();
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int result = solution->search(nums, 9);
    cout << "Result: " << result << endl;
    return 0;
}
