class Solution {
private:
    bool isBtwaToz(char c){
        if((c >= 97 && c <= 122) || (c >= 48 && c<= 57)){
            return true ;
        }
        return false ;
    } 
public:
    bool isPalindrome(string s) {
        int low = 0 ;
        int high = s.size() - 1 ;
        while(high > low ){
            s[low] = tolower(s[low]);
            s[high] = tolower(s[high]);
            if( ! isBtwaToz(s[high])){
                high--;
            }
            else if(! isBtwaToz(s[low])){
                low++;
            }
            else if(s[high] != s[low]){
                return false ;
            }
            else{
                high-- ;
                low++ ;
            }
        }
        return true ;
    }
};
