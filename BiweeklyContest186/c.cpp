class Solution {
public:
    int minOperations(string s1, string s2) {
      int n = s1.size();
        vector<int> co(n,0);
        int in = n-1;
        while(in>=0){
            if(s1[in]==s2[in]) in--;
            else if(s1[in]=='0' && s2[in]=='1'){
                co[in]++;
                s1[in]=s2[in];
                in--;
            }
            else{
                if(in-1>=0){
                    if(s1[in-1]=='0'){
                        s1[in-1]='1';
                        co[in-1]++;
                    }
                    co[in]++;
                    s1[in]='0';
                    s1[in-1]='0';
                    in--;
                }
                else if(in+1<n){
                    if(s1[in+1]=='0'){
                        s1[in+1]='1';
                        co[in+1]++;
                        
                    }
                    co[in]++;
                    s1[in]='0';
                    s1[in+1]='0';
                    in++;
                }
                else return -1;
            }
        }
        int ans =0;
        for(auto i : co) ans+=i;
        return ans;
    }
};©leetcode
