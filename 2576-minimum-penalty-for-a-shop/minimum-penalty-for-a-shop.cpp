class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> pre((n + 1) , 0);
        vector<int> suf((n + 1) , 0);
                for(int i = 0; i < n; i++){
            if(customers[i] != 'Y') {
                pre[i+1]++;
                pre[i+1] += pre[i];
            }
            else pre[i+1] += pre[i];
        }
        for(int i = n - 1; i >= 0 ; i--){
            if(customers[i] == 'Y'){
                suf[i]++;
                suf[i] += suf[i+1];
            }
            else suf[i] += suf[i+1];
        }
        for(int i = 0; i <= n; i++){
            pre[i] += suf[i];
        }
        int miii = INT_MAX;
        int idx = -1;
        for(int i = 0; i <= n ;i++){
            if(miii > pre[i]) {
                miii = pre[i];
                idx = i;
            }
        }
        return idx;
    }
};