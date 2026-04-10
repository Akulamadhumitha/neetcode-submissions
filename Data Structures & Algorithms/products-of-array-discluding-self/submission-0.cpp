class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> ans;
            int product=1;
            int count=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0) product*=nums[i];
                if(nums[i]==0) count++;
            }
            for(int i=0;i<nums.size();i++){
                if(count==1 && nums[i]==0){
                    ans.push_back(product);
                }
                else if(count==0){
                    ans.push_back(product/nums[i]);
                }
                else{
                    ans.push_back(0);
                }
            }
            return ans;
    }
};
