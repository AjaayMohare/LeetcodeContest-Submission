class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        int r = n;
        int c = m;
        vector<int > col(c,0);
        vector<vector<int>> vi(r,col),grid(r,col);
        
        priority_queue<vector<int> ,vector<vector<int>> ,greater<vector<int>> > pq;
        for(int i=0;i<sources.size();i++){
            vector<int> qq;
            qq.push_back(0);
            qq.push_back(-sources[i][2]);
            qq.push_back(sources[i][0]);
            qq.push_back(sources[i][1]);
            pq.push(qq);
        }
        while(pq.size()){
            vector<int> in = pq.top();
            pq.pop();
            if(vi[in[2]][in[3]]==1) continue;
            vi[in[2]][in[3]]=1;
            grid[in[2]][in[3]] = (-in[1]);
            int cr = in[2],cc = in[3];
            if( cr+1<r&&vi[cr+1][cc]==0 && cr+1<r) pq.push({in[0]+1,-grid[cr][cc],cr+1,cc});
            if( cr-1>=0&&vi[cr-1][cc]==0 && cr-1>=0) pq.push({in[0]+1,-grid[cr][cc],cr-1,cc});
            if( cc+1<c&&vi[cr][cc+1]==0 && cc+1<c) pq.push({in[0]+1,-grid[cr][cc],cr,cc+1});
            if( cc-1>=0&&vi[cr][cc-1]==0 && cc-1>=0) pq.push({in[0]+1,-grid[cr][cc],cr,cc-1});

            
        }
        return grid;
    }
};©leetcode
