class Solution {
public:
    int minRotations(string s) {
        int cu=0;
        int ans = 0;
        vector<vector<int>> vt;
        vt.push_back({0,1,2,3,4,5,4,3,2,1});
        vt.push_back({1,0,1,2,3,4,5,4,3,2});
        vt.push_back({2,1,0,1,2,3,4,5,4,3});
        vt.push_back({3,2,1,0,1,2,3,4,5,4});
        vt.push_back({4,3,2,1,0,1,2,3,4,5});
        vt.push_back({5,4,3,2,1,0,1,2,3,4});
        vt.push_back({4,5,4,3,2,1,0,1,2,3});
        vt.push_back({3,4,5,4,3,2,1,0,1,2});
        vt.push_back({2,3,4,5,4,3,2,1,0,1});
        vt.push_back({1,2,3,4,5,4,3,2,1,0});
        
        for(auto i : s){
            int val = i-'0';
            // lt or righft
        ans+=(vt[cu][val]);
            cu=val;
            
        }
        return ans;
    }
};©leetcode
