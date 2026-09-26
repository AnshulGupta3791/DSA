class Solution {
public:
bool sqare (int n){
    int y = sqrt(n);
    if(y * y == n) return true;
    else return false;
}
    bool judgeSquareSum(int c) {
        int lo = 0;
        int hi = c;
        while(lo <= hi){
            if(sqare(lo) && sqare(hi)) return true;
            else if(!sqare(hi)){
                hi = (int)sqrt(hi)*(int)sqrt(hi);
                lo = c - hi;
            }
            else {
                lo = ((int)sqrt(lo) + 1)*((int)sqrt(lo) + 1);
                hi = c - lo;
            }
        }
        return false;
        
    }
};