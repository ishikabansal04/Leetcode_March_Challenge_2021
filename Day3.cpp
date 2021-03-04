class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorop=0;
        for(int i=0; i<nums.size(); i++){
            xorop = xorop^nums[i];
        }
        for(int i=0; i<=nums.size(); i++){
            xorop = xorop^i;
        }
        return xorop;
    }
};