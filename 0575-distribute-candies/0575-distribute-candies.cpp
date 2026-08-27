class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        set<int>map;
        for(int i =0 ;i<n;i++){
            map.insert(candyType[i]);
        }
        int m = map.size();
        if(m > n/2){
            return n/2;
        }
        return m;
    }
};