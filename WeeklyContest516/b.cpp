class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& n, int l, int u) {
        map<int,int> m;
        vector<int> v;
        for(auto i : n) m[i]++;
        for(int i=l;i<=u;i++){
            if(m.count(i)) continue;
            v.push_back(i);
         }
        m.clear();
        for(auto i : v) m[i]++;
        vector<vector<int>> ret;
        
        if(v.size()==0) return  ret;
        vector<int> vis(u+1,false);
        for(int i=0;i<v.size();i++){
            vis[v[i]]=true;
        }
        // for(auto i : vis) cout << i << " ";
        // cout << endl;
        int in =l;
        while(in<vis.size()){
            // false to false;
            if(vis[in]==false){
                in++;
                continue;
            }
            int sin=in;
            int ein=in;
            while(ein<vis.size() && vis[ein]==true) ein++;
            ret.push_back({sin,ein-1});
            in=ein;
        }
        return ret;
    }
};
