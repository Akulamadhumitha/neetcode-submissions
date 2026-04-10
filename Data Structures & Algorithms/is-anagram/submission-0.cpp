class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> smap;
        for(auto i:s){
            smap[i]++;
        }
        unordered_map<char,int> tmap;
        for(auto i:t){
            tmap[i]++;
        }
        return smap==tmap;
    }
};
