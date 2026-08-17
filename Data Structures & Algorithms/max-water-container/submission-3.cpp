class Solution {
public:
    int maxArea(vector<int>& nums) {
        int l = 0 ;
        int r = nums.size() - 1 ;
        int area = 0 ;
        while(l < r){
            int mini = min(nums[l] , nums[r]);
            area = max(area , mini * (r - l ) );
            cout << area  << endl;
            if(nums[l] >  nums[r]){
                r-- ;
            }else{
                l++ ;
            }
        }
        return area ;
    }
};
