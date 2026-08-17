
class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l = 0;
        int r = 0;
        int n = s.size() ;
        int len = 0;
        string ans;
        while (r < n) {
            if (mp.find(s[r]) != mp.end()) {
                    l = max(mp[s[r]] + 1, l);
            }
            if (r - l + 1 > len) {
                    len = r - l  + 1;
                    ans = s.substr(l, r - l + 1);
                }
            mp[s[r]] = r ;
            r++ ;
        }
        cout << ans << endl ; 
        return len ;
    }
};

