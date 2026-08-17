class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int count = 0 ;
        sort(nums.begin(),nums.end());
        int l = 0 ;
        int r = nums.size() - 1;
        while( r >= l){
            int sum = r == l ? nums[r] : nums[l] + nums[r];
            if(sum <= limit){
                r-- ;
                l++ ;
            }
            else{
                r-- ;
            }
            count++ ;
        }
        return count ;
    }
};