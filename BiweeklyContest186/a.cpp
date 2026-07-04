class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size()/2;
        int val = nums[n];
        int cnt =0;
        for(auto i :nums){
            if(i==val) cnt++;
        }
        return cnt==1;
    }
};©leetcode
