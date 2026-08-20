class Solution {
   public:
    int trap(vector<int>& height) {
        int n = height.size() ;
        int maxi = max_element(height.begin(), height.end()) - height.begin() ;
        int lmax = 0 ;
        int rmax = n - 1 ;
        int water = 0 ;
        int bars1 = 0 ;
        for(int i = 1 ; i <= maxi ; i++){
            if(height[i] >= height[lmax]){
                water += (height[lmax] * (i - lmax - 1)) - bars1 ;
                bars1 = 0 ;
                lmax = i ;
            }
            else{
                bars1 += height[i];
            }
        }
        int bars2 = 0 ;
        for(int i = n - 2 ; i >= maxi ; i--){
            if(height[i] >= height[rmax]){
                water += (height[rmax] * ( rmax - i - 1)) - bars2 ;
                bars2 = 0 ;
                rmax = i ;
            }
            else{
                bars2 += height[i];
            }
        }
        return water ;
    }
};
