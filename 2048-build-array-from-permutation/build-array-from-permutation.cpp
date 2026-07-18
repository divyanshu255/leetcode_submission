class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        int x=0;
        for(auto i:nums){
          v[x]=nums[i];
          x++;
        }
        return v;
        
    }
};