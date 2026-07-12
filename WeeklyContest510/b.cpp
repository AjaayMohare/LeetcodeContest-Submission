class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        int cost = 1;
        int m = 1000000007;
        long long sum = 0;
        for(auto i : nums) sum+=i;
        long long ans = (((sum-1)/k)%m)*((((sum-1)/k)+1)%m)%m;
        ans = ans * (500000004) %m;
        return  ans;
    }
};©leetcode
