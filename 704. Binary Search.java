class Solution {
    public int search(int[] nums, int target) {
        if (target > nums[nums.length - 1]) {
            return -1;
        }
        int start = 0;
        int end = nums.length;
        int mid;
        while (start <= end) {
            mid = start + ((end - start) / 2);
            if (target == nums[mid]) {
                return mid;
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            }
        }
        return -1;
    }
}