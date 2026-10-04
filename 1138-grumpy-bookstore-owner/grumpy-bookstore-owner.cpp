class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k = minutes;
        vector<int>& arr = customers;
        int n = arr.size();
        int preloss = 0;
        for(int i = 0 ; i < k; i++){
            if(grumpy[i] == 1) preloss += arr[i];
        }
        int idx = 0;
        int maxLoss = preloss;
        int i = 1;
        int j = k;
        while(j < n){
            int currloss = preloss;
            if(grumpy[j] == 1) currloss += arr[j];
            if(grumpy[i - 1] == 1) currloss -= arr[i - 1];
            if (currloss > maxLoss){
                maxLoss = currloss;
                idx = i;
            }
            preloss = currloss;
            i++;
            j++;
        }
        for(int i = idx ; i < idx + k ; i++){
            if(grumpy[i] == 1) grumpy[i] = 0;
            
        }
        int maxSatis = 0;
        for(int i = 0 ; i < n ; i++){
            if(grumpy[i] == 0) maxSatis += arr[i];
        }
        return maxSatis;

        
    }
};