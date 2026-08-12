class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int r = n - 1 ;
        int l = 0 ;
        while(r > l ){
            int required = target - nums[l];
            if(required > nums[r]){
                l++ ;
            }
            else if(required < nums[r ]){
                r--;
            }
            else{
                return {l + 1 , r + 1};
            }
        }
        return {-1,-1};
    }
};
