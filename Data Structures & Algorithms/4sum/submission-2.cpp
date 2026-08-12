class Solution {
   public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            while ((i > 0 && i < n) && nums[i] == nums[i - 1]) i++;
            int j = i + 1;
            while (j < n - 1) {
                int l = j + 1;
                int r = n - 1;
                while (l < r) {
                    long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[r];
                    if (sum > target) {
                        r--;
                        while (r > l && nums[r] == nums[r + 1]) r--;
                    } else if (sum < target) {
                        l++;
                        while (r > l && nums[l] == nums[l - 1]) l++;
                    } else {
                        cout << i << j << l << r ;
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                        while (r > l && nums[r] == nums[r + 1]) r--;
                        while (r > l && nums[l] == nums[l - 1]) l++;
                    }
                }
                j++;
                while (j < n - 1 && nums[j] == nums[j - 1]) j++;
            }
        }
        return ans ;
    }
};