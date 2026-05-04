class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0;
        unordered_map<char,int>mp;
        int maxFreq=INT_MIN;
        int maxi=INT_MIN;
        for(int r=0;r<n;r++){
           mp[s[r]]++;
           maxFreq=max(maxFreq,mp[s[r]]);
           while((r-l+1)-maxFreq > k){
            mp[s[l]]--;
            maxFreq=max(maxFreq,mp[s[l]]);
            l++;
           }
           maxi=max(maxi,(r-l+1));
        }
        return maxi;
    }
};
