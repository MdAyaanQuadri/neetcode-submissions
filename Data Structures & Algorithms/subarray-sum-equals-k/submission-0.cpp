class Solution {
private:
    vector<int> prefixSum(vector<int>& nums){
        int n = nums.size();
        vector<int> prefixSm(n+1 , 0 );
        prefixSm[0] = 0 ;
        for(int i = 1 ; i <= n ; i++){
            prefixSm[i] = prefixSm[i - 1] + nums[i - 1];
        }
        return prefixSm ;
    }
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0 ;
        vector<int> prefixSm = prefixSum(nums);
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j <= n ; j++){
                if((prefixSm[j] -prefixSm[i]) == k ){
                    count++;
                }
            }
        }      
        return count ;  
    }
};