class Solution {
public:
    int minOperations(string s) {
        string ts = s+s;
        int ans = INT_MAX;
        vector<char>c;
        for(int i=0;i<26;i++)  c.push_back('a'+i);
        for(int i=0;i<26;i++)  c.push_back('a'+i);
        int n=s.size();
        for(int i=0;i<ts.size();i++){
            int st=i;
            int en=i+n-1;
            if(en>=ts.size()) break;
            int sc=0;    
            while(st<en){
                char l = ts[st];
                char r=ts[en];
                if(l==r)sc+=0;
                else{
                    // l to r
                    int c1=0;
                    int i1=l-'a';
                    while(c[i1]!=r) {
                        c1++;
                        i1++;
                    }
                    int c2=0;
                    int i2=r-'a';
                    while(c[i2]!=l) {
                        c2++;
                        i2++;
                    }
                    sc+=min(c1,c2);
                }
                st++;
                en--;
            }
            sc+=i;
            ans=min(ans,sc);
        }
        return ans;
    }
};
