class Solution {
    public int[] sortedSquares(int[] nums) {
        int l = 0;
        int r = nums.length - 1;
        int[] res = new int[nums.length];
        int i = r;
        while (l <= r) {
            if (Math.abs(nums[l]) <= Math.abs(nums[r])) {
                res[i] = nums[r] * nums[r];
                r--;
            } else {
                res[i] = nums[l] * nums[l];
                l++;
            }
            i--;
        }
        return res;
    }
}
