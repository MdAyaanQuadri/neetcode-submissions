class Solution {
   public:
    int maxArea(vector<int>& nums) {
        int area = INT_MIN;
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        while (l < r) {
            int mini = min(nums[l], nums[r]);
            area = max(area, (r - l) * mini);
            if (nums[l] >= nums[r]) {
                r--;
            } else {
                l++;
            }
        }
        return area;
    }
};
