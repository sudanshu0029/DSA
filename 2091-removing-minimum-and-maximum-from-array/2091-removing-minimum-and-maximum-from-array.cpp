class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minn = INT_MAX;
        int maxx = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxx = max(maxx, nums[i]);
            minn = min(minn, nums[i]);
        }
        int lower = 0;
        int higher = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == minn) {
                lower = i;
            } else if (nums[i] == maxx) {
                higher = i;
            }
        }
        int left = 0;
        int right = 0;
        if (lower > higher) {
            swap(lower, higher);
        }
        left = higher + 1;
        right = n - lower;
        int both = (lower + 1) + (n - higher);

        return min({left, right, both});
    }
};