class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++) {
            map[nums[i]]++;
        }
        int sum = 0;
        for(auto x : map) {
            if (x.second == 1) {
                sum += x.first;
            }
        }
        return sum;
    }
};