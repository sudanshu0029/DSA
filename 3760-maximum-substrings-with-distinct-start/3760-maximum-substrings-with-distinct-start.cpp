class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int>map;
        for(int i = 0  ; i< s.size() ;i++){
            map[s[i]]++;
        }
        return map.size();
    }
};