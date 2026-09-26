class Solution {
public:
int check(int mid , vector<int>& weights, int days){
    int m = mid;
    int n = weights.size();
    int count = 1;
    for(int i = 0 ; i < n ; i++){
        if(m >= weights[i]){
            m -= weights[i];
        }
        else{
            count++;
            m = mid;
            m -= weights[i];

        }
    }
    if(count > days) return false;
    else return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0;
        int max = INT_MIN;

        for(int i = 0 ; i < n ; i++){
            if(max < weights[i]) max = weights[i];
            sum += weights[i];
        }
        int lo = max;
        int hi = sum;
        int minimumCapacity = sum;
        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            if(check(mid , weights , days)){
                minimumCapacity = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        return minimumCapacity;
        
    }
};