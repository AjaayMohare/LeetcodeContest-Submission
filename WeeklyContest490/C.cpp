class Solution {
public:
    string maximumXor(string s, string t) {
        int cnt = 0 ;
        for(int i=0;i<t.size();i++){
            if(t[i]=='1') cnt++;
        }
        map<int,int> m;
        for(int i=0;i<s.size();i++){
            if(cnt && s[i]=='0'){
                cnt--;
                s[i]='1';
                m[i]++;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1' && cnt && m[i]==0){
                s[i]='0';
                cnt--;
            }
        }
        return s;
    }
};
