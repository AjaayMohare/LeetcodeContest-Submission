class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int mx = INT_MIN;
        vector<int> cp = nums;
        int n= nums.size();
        for(int i=n-1;i>=0;i--){
            mx=max(mx,cp[i]);
            cp[i]=mx;
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            int vi = k+i;
            if(vi>=n) break;
            ans=max(ans,cp[vi]+nums[i]);
        }
        return ans;
    }
};©leetcode
