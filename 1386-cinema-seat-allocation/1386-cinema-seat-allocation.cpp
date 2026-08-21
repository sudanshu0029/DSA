class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, unordered_set<int>> seats;

        for (auto a : reservedSeats) {
            seats[a[0]].insert(a[1]);
        }
        int ans = (n - seats.size()) * 2;
        for (auto a : seats) {
            auto &reserved = a.second;
            bool p1 = true; 
            bool p2 = true; 
            bool p3 = true; 
            for (int i = 2; i <= 5; i++) {
                if (reserved.count(i)) {
                    p1 = false;
                    break;
                }
            }
            for (int i = 4; i <= 7; i++) {
                if (reserved.count(i)) {
                    p2 = false;
                    break;
                }
            }

            for (int i = 6; i <= 9; i++) {
                if (reserved.count(i)) {
                    p3 = false;
                    break;
                }
            }

            if (p1 && p3) {
                ans += 2;
            }
            else if (p1 || p2 || p3) {
                ans += 1;
            }
        }

        return ans;
    }
};