class Solution {
public:
    bool check(long long hr , vector<int>& time, int totalTrips){
        int n = time.size();
        long long trips = 0;
        for(int i = 0 ; i < n ; i++){
            trips += hr/(long long)time[i];
        }
        if(trips < totalTrips) return false;
        else return true;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();
        long long mx = -1;
        for(int i = 0 ; i < n ; i++){
            mx = max(mx , (long long)time[i]);
        }
        long long lo = 1;
        long long hi = mx * (long long)totalTrips;
        long long ans = -1;
        while(lo <= hi){
            long long mid = lo + (hi - lo) / 2;
            if(check(mid , time , totalTrips)) 
            {    ans = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;

        }
        return ans;

        


        
    }
};