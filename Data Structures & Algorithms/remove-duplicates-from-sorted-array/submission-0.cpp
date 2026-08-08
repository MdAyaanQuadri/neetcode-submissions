class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        int curr = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            } else {
                curr++;
                cout << i << " " << curr;
                nums[curr] = nums[i];
            }
        }
        return curr + 1;
    }
};