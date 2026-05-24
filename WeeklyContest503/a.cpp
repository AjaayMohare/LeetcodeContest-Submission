class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int> m;
        vector<int> re;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            if(m[nums[i]]<=k) re.push_back(nums[i]);
        }
        return re;
    }
};
