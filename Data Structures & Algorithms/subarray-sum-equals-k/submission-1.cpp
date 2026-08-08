class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0 ;
        int currentSum = 0 ;
        unordered_map<int,int> mp ;
        mp[0] = 1;
        for( int x : nums){
            currentSum += x ;
            int target = currentSum - k ;
            if(mp.find(target) != mp.end()){
                count += mp[target] ;
            }
            mp[currentSum]++;
        }        
        return count ;  
    }
};