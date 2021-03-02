class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int, int>vis;
        for(int i=0;i<nums.size();i++){
            if(vis.count(nums[i])>0){
                ans.push_back(nums[i]);
            }
            vis[nums[i]]=1;
        }
        for(int i=1;i<=nums.size();i++){
            if(vis.count(i)==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};