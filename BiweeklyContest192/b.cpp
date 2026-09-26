class Solution {
public:
    bool canTransform(vector<int>& s, vector<int>& t) {
        long long s1=0;
        long long t1=0;
        for(auto i : s) s1+=i;
        for(auto i : t) t1+=i;
        return s1==t1;
    }
};
