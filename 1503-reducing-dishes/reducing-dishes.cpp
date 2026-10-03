class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin() , satisfaction.end());
        vector<int> suff(n);
        int p = satisfaction[n - 1];
        for(int i = n - 1; i > 0 ; i--){
            suff[i] = p;
            p += satisfaction[i - 1];
        }
        suff[0] = p;
        int idx = -1;
        for(int i = 0; i < n ; i++){
            if(suff[i] > 0) {
                idx = i;
                break;
            }
        }
        if(idx == -1) return 0;
        int maxsat = 0;
        int h = 1;
        for(int i = idx ; i < n ; i++){
            maxsat += satisfaction[i]*h;
            h++;
        }
        return maxsat;
    }
};