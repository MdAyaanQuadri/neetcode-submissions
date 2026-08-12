class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        vector<vector<int>> ans;
        while (i < n) {
            if (nums[i] > 0) break;
            while ((i > 0 && i < n) && nums[i] == nums[i - 1]) {
                i++;
            };
            int l = i + 1;
            int r = n - 1;

            while (r > l) {
                int sum = nums[i] + nums[l] + nums[r];

                if (sum > 0) {
                    r--;
                    while (r > l && nums[r] == nums[r + 1]) r--;

                } else if (sum < 0) {
                    l++;
                    while (r > l && nums[l] == nums[l - 1]) l++;

                } else {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (r > l && nums[l] == nums[l - 1]) l++;
                    while (r > l && nums[r] == nums[r + 1]) r--;
                }
            }
            i++;
        }
        return ans;
    }
};
