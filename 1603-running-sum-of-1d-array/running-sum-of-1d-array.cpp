class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> sum(n);
        int suuu = 0;
        for(int i = 0 ;i < n ; i++){
            suuu += nums[i];
            sum[i] = suuu;
        }
        return sum;

        
    }
};