class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> pg;
        int mx = INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            pg.push_back(__gcd(mx,nums[i]));
        }
        sort(pg.begin(),pg.end());
        int l = 0;
        int r = pg.size()-1;
        long long ans = 0;
        while(l<r){
            ans+= __gcd(pg[l],pg[r]);
            l++;
            r--;
            
        }
        return ans;
    }
};©leetcode
