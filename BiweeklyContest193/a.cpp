class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        vector<vector<int>> p;
        map<int,vector<int>> m;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j) continue;
                if(nums[i]+nums[j]==target && nums[i]>nums[j]){
                    int pr= nums[i]*nums[j];
                    mx=max(mx,pr);
                    m[pr]={i,j};
                }
            }
        }
        if(m.size()==0) return {-1,-1};
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i==j) continue;
                if(nums[i]+nums[j]==target && nums[i]*nums[j]==mx && nums[i]>nums[j]) return {i,j};
            }
        }
        return {};
    }
};
