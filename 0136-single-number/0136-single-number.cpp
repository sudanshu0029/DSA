class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for( auto a: nums){
            freq[a]++;
        }
        int res = 0;
        for(auto a: freq){
            if(a.second==1){
               res = a.first;
            }
        }
        return res;
    }
};