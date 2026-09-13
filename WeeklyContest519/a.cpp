class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& g, vector<int>& r, vector<int>& c) {
        for(int i=0;i<r.size();i++){
            vector<int> sf(n);
            vector<int> th = g[i];
            int k = r[i];
            for(int j=0;j<n;j++){
                sf[j]=th[(j+k)%n];
            }
            g[i]=sf;
        }
        int rw=0;
        for(int i=0;i<c.size();i++){
            vector<int> th;
            int col = i;
            for(int j=0;j<n;j++) th.push_back(g[j][i]);
            vector<int> sf(n);
            int k=c[i];
            for(int j=0;j<n;j++){
                sf[j]=th[(j+k)%n];
            }
            for(int j=0;j<n;j++) g[j][i]=sf[j];
        }
        return g;
    }
};
