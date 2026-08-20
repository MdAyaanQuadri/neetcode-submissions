class Solution {
   public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int mini = n;
        int l = 0;
        int r = 0;
        int tSum = 0 ;
        for( int x : nums){
            tSum += x ;
        }
        if( tSum < target ) return 0 ;
        int sum = 0;
        while (r < n) {
            sum += nums[r];
            cout << sum <<endl;
            while(l <= r && sum >= target){
                mini = min(mini,(r - l + 1));
                sum -= nums[l];
                l++ ;
            }
            r++;
        }
        return mini;
    }
};