class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        //int suuu = 0;
        for(int i = 1 ;i < n ; i++){
            // suuu += nums[i];
            // nums[i] = suuu;
            nums[i] += nums[i - 1];
        }
        return nums;

        
    }
};