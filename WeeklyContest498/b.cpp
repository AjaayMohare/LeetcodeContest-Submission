class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> miv,mxv;
        int mi =INT_MAX;
        int mx =INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            mxv.push_back(mx);
        }
        for(int j=nums.size()-1;j>=0;j--){
            mi=min(mi,nums[j]);
            miv.push_back(mi);
        }
        reverse(miv.begin(),miv.end());
        for(int i=0;i<mxv.size();i++){
            if(mxv[i]-miv[i]<=k) return i;
        }
        return -1;
    }
};©leetcode
