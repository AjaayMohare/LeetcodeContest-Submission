class Solution {
public:
    int countSpecialIntegers(vector<int>& n) {
        map<int,vector<int>> m;
        for(int i=0;i<n.size();i++) m[n[i]].push_back(i);
        int ans=0;
        for(auto i : m){
            if(i.second.size()<3) continue;
            vector<int> d = i.second;
            int dis = d[1]-d[0];
            bool ok = true;
            for(int j=2;j<d.size();j++){
                if(d[j]-d[j-1]!=dis){
                    ok=false;
                    break;
                }
            }
            if(ok){
                ans++;
            }
       }
        return ans;

    }
};
