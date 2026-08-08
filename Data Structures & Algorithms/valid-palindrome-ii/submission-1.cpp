class Solution {
   private:
    bool isPalindrome(string s) {
        int low = 0 ;
        int high = (int)s.size() - 1;
        while (high > low) {
            if (s[high] != s[low]) {
                return false;
            }
            high--;
            low++;
        }
        return true;
    }

   public:
    bool validPalindrome(string s) {

        int low = 0;
        int high = (int)s.size() - 1;
        while (high > low) {
            if (s[high] != s[low]) {
                return isPalindrome(s.substr(low + 1, high - low)) || isPalindrome(s.substr(low, high - low));
            } else {
                high--;
                low++;
            }
        }
        return true;
    }
};