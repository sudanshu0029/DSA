class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>sq(begin(nums),end(nums));
        int c= sq.size();
        unordered_map<int,int>freq;
        int res = 0;
        int i = 0 , j=0;
        while(j<n){
            freq[nums[j]]++;
            while(freq.size() == c){
                res += n-j;
                freq[nums[i]]--;
                if(freq[nums[i]]==0){
                    freq.erase(nums[i]);
                }
                i++;
            }
            j++;
        }
        return res;
    }
};