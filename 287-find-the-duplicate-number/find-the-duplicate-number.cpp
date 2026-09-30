class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i = 0; 
        while(i < n){
            int idx = nums[i];
            if(nums[idx] == nums[i]) return nums[idx];
            else swap(nums[idx],nums[i]);
        }
        return 0;
    }
};