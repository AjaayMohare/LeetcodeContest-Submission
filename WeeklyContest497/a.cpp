class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& m) {
        int n = m.size();
        vector<int> ans(n,0);
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==1) ans[i]++;
            }
        }
        return ans;
    }
};©leetcode
