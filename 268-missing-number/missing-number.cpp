class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i < n){
            int idx = nums[i];
            if(idx < i) swap(nums[idx] , nums[i]);
            else i++;
        }
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != i) return i;
        }
        return n;
    }
    
};