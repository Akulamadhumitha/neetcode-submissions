class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>maap;
        for(auto i:nums){
            maap[i]++;
        }
        for(auto it:maap){
            if(it.second>1){
                return true;
                break;
            }
        }
        return false;
    }
};
