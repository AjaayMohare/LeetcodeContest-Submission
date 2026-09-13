class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        vector<int> v;
        long long in=0;
        for(auto i : nums){
            int val = i;
            while(v.size() && v.back()>val) v.pop_back();
            in+=(lower_bound(v.begin(),v.end(),val)-v.begin());
            v.push_back(val);
        }
        return in;
    }
};
