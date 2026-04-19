class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int mx = INT_MIN ,mi=INT_MAX;
            for(int j=0;j<=i;j++) mx=max(mx,nums[j]);
            for(int j=i;j<nums.size();j++) mi=min(mi,nums[j]);
            if(mx-mi<=k) v.push_back(i);
        }
        if(v.size()) return v[0];
        return -1;
    }
};©leetcode
