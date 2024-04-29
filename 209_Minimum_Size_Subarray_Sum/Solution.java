class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int slow = 0;
        int fast = 1;
        int sum = nums[0];
        int min = 0;

        while (slow < nums.length && min != 1) {
            if (sum < target) {
                if (fast == nums.length) {
                    break;
                }
                sum += nums[fast++];
            } else {
                min = min == 0 ? fast - slow : Math.min(fast - slow, min);
                sum -= nums[slow++];
            }
        }

        return min;
    }
}
