class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int suuu = 0;
        for(int i = 0 ;i < n ; i++){
            suuu += nums[i];
            nums[i] = suuu;
        }
        return nums;

        
    }
};