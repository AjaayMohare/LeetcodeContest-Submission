class Solution {
public:
    int passwordStrength(string p) {
        int sc = 0;
        map<char,int> m;
        for(int i=0;i<p.size();i++){
            if(m.count(p[i])) continue;
            m[p[i]]++;
            if(p[i]>='a' && p[i]<='z') sc++;
            else if(p[i]>='A' && p[i]<='Z')sc+=2;
            else if(p[i]>='0' && p[i]<='9') sc+=3;
            else if(p[i]=='!' || p[i]=='@' || p[i]=='#' || p[i]=='$') sc+=5;
        }
        return sc;
    }
};
