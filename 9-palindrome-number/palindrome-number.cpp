class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int old = x;
        long long neeew = 0;
        while(x != 0){
            int digit = x % 10;
            neeew = neeew * 10 + digit;
            x /= 10;
        }
        return old == neeew;
    }
};