class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> num(n, 0);
        vector<int> ans;
        if (k == 0) {
            return num;
        } else if (k > 0) {
            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = i + 1; j <= i + k; j++) {
                    sum += code[j % n];
                }
                ans.push_back(sum);
            }
        } else {
            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = i - 1; j >= i + k; j--) {
                    if (j >= 0) {
                        sum += code[j];
                    }
                    else{
                        sum +=code[j+n];
                    }
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
};