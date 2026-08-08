class Solution {
   private:
    bool isBtwaToz(char c) {
        c = tolower(c);
        if ((c >= 97 && c <= 122) || (c >= 48 && c <= 57)) {
            return true;
        }
        return false;
    }
   public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;
        while (high > low){
            if (!isBtwaToz(s[high])) {
                high--;
                continue;
            } else if (!isBtwaToz(s[low])) {
                low++;
                continue;
            }
        if (tolower(s[high]) != tolower(s[low])) {
            return false;
        } else {
            high--;
            low++;
        }
    }
    return true;
}
};
