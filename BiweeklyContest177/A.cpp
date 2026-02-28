class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int> m ;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        for(auto i:m){
            for(auto j:m){
                if(i.first < j.first && i.second !=j.second) return {i.first,j.first};
            }
        }
        return {-1,-1};
    }
};
