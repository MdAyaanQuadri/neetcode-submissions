class Solution {
   public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++) {
            while (i > 0 && i < n - 3 && nums[i] == nums[i - 1]) i++;
            for (int j = i + 1; j < n - 2; j++) {
                while (j > i + 1 && j < n - 2 && nums[j] == nums[j - 1]) j++;
                int l = j + 1;
                int r = n - 1;
                while (l < r) {
                    long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[r];
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                        while (l < r && nums[l] == nums[l - 1]) l++;
                        while (l < r && nums[r] == nums[r + 1]) r--;
                    } else if (sum > target) {
                        r--;
                        while (l < r && nums[r] == nums[r + 1]) r--;
                    } else {
                        l++;
                        while (l < r && nums[l] == nums[l - 1]) l++;
                    }
                }
            }
        }
        return ans ;
    }
};