class Solution {
   public:
    void reverseString(vector<char>& s) {
        int low = 0 ;
        int high = s.size() - 1;
        while(high > low){
            swap(s[high],s[low]);
            high--;
            low++ ;
        }
    }
};