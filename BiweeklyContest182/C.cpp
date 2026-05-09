class Solution {
public:
    int minGenerations(vector<vector<int>>& p, vector<int>& t) {
        set<vector<int>> s;
        for(int i=0;i<p.size();i++) s.insert(p[i]);
        int gen = 0;
        if(s.count(t)) return gen;
        while(true){
            vector<vector<int>> rem;
            for(int i=0;i<p.size();i++){
                for(int j=i+1;j<p.size();j++){
                    vector<int> n;
                    n.push_back(floor((p[i][0]+p[j][0])/2));
                    n.push_back(floor((p[i][1]+p[j][1])/2));
                    n.push_back(floor((p[i][2]+p[j][2])/2));
                    if(!s.count(n)){
                        rem.push_back(n);
                        
                        
                        s.insert(n);
                        if(n==t) return gen+1;
                    }
                }
            }
            if(rem.size()==0) return -1;
            gen++;
            for(int i=0;i<rem.size();i++) p.push_back(rem[i]);
        }
        return 0;
    }
};
