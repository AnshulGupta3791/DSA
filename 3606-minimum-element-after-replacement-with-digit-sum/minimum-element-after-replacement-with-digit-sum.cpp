class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0 ; i < n; i++){
            int num = nums[i];
            while(num > 0){
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            nums[i] = sum;
            sum = 0;
            
        }
        int min = INT_MAX;
        int idx = 0;
        for(int i = 0 ; i < n ; i++){
            if(min > nums[i]){
                min = nums[i];
                idx = i;
            }
        }
        return nums[idx];
    }
};