class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        int tz=0,to=0;
        for(auto i :s){
            if(i=='0') tz++;
            else to++;
        }
        vector<bool>ans;
        for(int i=0;i<strs.size();i++){
            string con = strs[i];
            int cz=0,co=0,cq=0;
            for(auto j : con){
                if(j=='0') cz++;
                else if(j=='1') co++;
                else cq++;
            }
            if(tz-cz<0 || tz-cz>cq){
                ans.push_back(false);
                continue;
            }
            ans.push_back(true);
            int zc=0,zs=0,qc=0;
            for(int j=0;j<con.size();j++){
                if(con[j]=='0') zc++;
                else if(con[j]=='?') qc++;
                if(s[j]=='0') zs++;
                int mx=max(0,zs-zc);
                if(mx>qc){
                    ans.pop_back();
                    ans.push_back(false);
                    break;
                }
                else if(mx>tz-cz){
                    ans.pop_back();
                    ans.push_back(false);
                    break;
                }
            }
        }
        for(auto i : ans) cout <<i << " ";
        cout << endl;
        return ans;
    }
};
