class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0 , j = 0 , flip = 0 , maxLen = INT_MIN , len = INT_MIN;
        while(j < n){
            if(nums[j] == 1) j++;
            else{
                if(flip < k){// hama flip krna hai 0 ko one se;
                    flip++;
                    j++;
                }
                else{ //flip == k
                    len = j - i;
                    maxLen = max(maxLen , len);
                    while(nums[i] == 1) i++;
                    i++;
                    j++;
                }
            }
        }
        len = j - i;
        maxLen = max(maxLen , len);
        return maxLen;
    }
};