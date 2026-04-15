class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.size();
        map<char,int>m;
        int maxlen=0;
        int l=0;
        int r=0;
        if(s.empty()) return 0;
        while(r<len){
            m[s[r]]++;
            while(m.size()!=(r-l)+1){
                m[s[l]]--;
                if(m[s[l]]==0) m.erase(s[l]);
                l++;
            }
            maxlen=max(maxlen,(r-l)+1);
            r++;
        }
        return maxlen;
    }
};
