class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> mp ;
        for(int x : nums) mp[x]++;
        vector <int> topK ;
        int max = nums[0];
        int tmpK = k ; 
        while(tmpK > 0 ){
            for(int x : nums){
                if(mp[max] < mp[x]){
                    max = x ;
                }
            }
            topK.push_back(max);
            mp[max] = -1 ;
            tmpK--;
        }
        return topK ;
        }
};

