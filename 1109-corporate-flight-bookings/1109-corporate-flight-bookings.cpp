class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        int m = bookings.size();
        vector<int>diff(n+2,0);
        for(auto a:bookings){
            int start = a[0];
            int end = a[1];
            int count = a[2];

            diff[start]+=count;
            diff[end+1]-=count; 
        }
        vector<int> ans;
        int prefix = 0 ;
        for( int i = 1 ; i<n+1 ; i++){
            prefix += diff[i];
            ans.push_back(prefix);
        }
        return ans;
    }
};