class Solution {
   public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n < 3) return 0;
        int l = 0;
        int r = n - 1;
        int maxi = max_element(height.begin(),height.end()) - height.begin();
        while ((l < n - 1) && height[l] <= height[l + 1]) l++;
        while ((r > 0 ) && height[r] <= height[r - 1]) r--;
        int barsBetween1 = 0;
        int water1 = 0;
        for (int i = l + 1; i <= maxi; i++) {
            int mini = min(height[i], height[l]);
            if (i == maxi || height[l] <= height[i]) {
                water1 += (mini * (i - l - 1)) - barsBetween1;
                barsBetween1 = 0;
                l = i;
            } else {
                barsBetween1 += height[i];
            }
        }
        int water2 = 0;
        int barsBetween2 = 0;
        for (int i = r - 1; i >= maxi; i--) {
            int mini = min(height[i], height[r]);
            if (i == maxi || height[r] <= height[i]) {
                water2 += (mini * (r - i - 1)) -  barsBetween2;
                 barsBetween2 = 0;
                r = i;
            } else {
                 barsBetween2 += height[i];
            }
        }

        return water1 + water2 ;
    }
};