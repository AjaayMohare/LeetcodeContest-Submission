class Solution {
public:
    string mergeCharacters(string s, int k) {
        map<char,int> m;
        string y = "";
        int di = 0;
        for(int i=0;i<s.size();i++){
            if(!m.count(s[i])){
                y.push_back(s[i]);
                m[s[i]]=i-di;
            }
            else{
                int v1 = m[s[i]];
                if(i-di-v1 >k){
                    y.push_back(s[i]);
                    m[s[i]]=i-di;
                }
                else di++;
            }
        }
        return y;
    }
};
