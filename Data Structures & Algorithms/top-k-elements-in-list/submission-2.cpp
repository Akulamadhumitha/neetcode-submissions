class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> bucketList(n+1);
        for(auto &it:mp){
            int val = it.second;
            bucketList[val].push_back(it.first);
        }
        vector<int>result;
        for(int i=n;i>=0;i--){
            for(auto num:bucketList[i]){
                result.push_back(num);
                if(result.size()==k){
                    return result;
                }
            }
        }
        return result;
    }
};
