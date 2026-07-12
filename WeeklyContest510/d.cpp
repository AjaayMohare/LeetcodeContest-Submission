class Solution {
public:
    int maxConsistentColumns(vector<vector<int>>& grid, int limit) {
        int col  = grid[0].size();
        int rol = grid.size();
        vector<int> ans(col,1);
        for(int i=0;i<col;i++){
            int mx =  0;
            for(int j=0;j<i;j++){
                bool valid = true;
                for(int k=0;k<rol;k++){
                    if(abs(grid[k][j]-grid[k][i]) > limit)  valid= false;
                }
                if(valid == true) mx=max(mx,ans[j]);
            }
            ans[i]+=mx;
        }
        int ret = 1;
        for(auto i : ans){
            cout << i <<  " ";
            ret=max(ret,i);
        }
        cout << endl;
        return ret;
    }
};©leetcode
