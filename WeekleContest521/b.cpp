class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int wo = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) wo++;
        }

        map<pair<int,int>,int> mv;
        map<int,int>m;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]) m[nums[i]]++;
            else mv[{nums[i-1],nums[i]}]++;
        }
        int ans = wo;
        for(auto i : mv){
            int y=i.first.first;
            int x=i.first.second;
            int g=i.second;
            if(mv.count({x,y})) g+=mv[{x,y}];
            ans=max(ans,wo+g);
        }
        return ans;
    }
};©leetcode
