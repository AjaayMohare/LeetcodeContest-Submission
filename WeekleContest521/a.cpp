class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> m;
        for(auto i : nums) m[i]++;
        vector<int> uq;
        for(auto i : m) uq.push_back(i.first);
        sort(uq.begin(),uq.end());
        vector<int> r;
        while(m.size()){
            for(int i=0;i<uq.size();i++){
                int val = uq[i];
                if(m.count(val)){
                    r.push_back(val);
                    m[val]--;
                    if(m[val]==0) m.erase(val);
                }
            }
        }
        return r;
    }
};©leetcode
