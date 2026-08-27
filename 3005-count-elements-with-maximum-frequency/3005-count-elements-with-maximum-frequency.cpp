class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        int max_freq = INT_MIN;
        unordered_map<int, int>map;
        for( auto a : nums){
            map[a]++;
            max_freq = max(max_freq, map[a]);
        }
       
        int count = 0;
        for( auto a : map){
            
            if(a.second == max_freq){
                count=count+a.second;
            }
        }
        return count ;
    }
};