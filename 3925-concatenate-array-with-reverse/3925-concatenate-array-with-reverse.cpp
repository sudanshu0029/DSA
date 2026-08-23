class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>v;
        for(auto a:nums){
            v.push_back(a);
        }
        reverse(v.begin(),v.end());
         for(auto a:v){
            nums.push_back(a);
        }
        return nums;
    }
};