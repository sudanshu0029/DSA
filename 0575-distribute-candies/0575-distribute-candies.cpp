class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_map<int,int>map;
        for(int i =0 ;i<n;i++){
            map[candyType[i]]++;
        }
        int m = map.size();
        if(m > n/2){
            return n/2;
        }
        return m;
    }
};