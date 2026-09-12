class Solution {
public:
    int countSpecialIntegers(vector<int>& n) {
        set<int> st;
        reverse(n.begin(),n.end());
        n.push_back(0);
        reverse(n.begin(),n.end());
        for(int i=1;i<n.size();i++){
            int in=i;
            int dis=1;
            while(in+2*dis<n.size()){
                if(n[in]==n[in+dis] && n[in+dis]==n[in+2*dis]) st.insert(n[in]);
                dis++;
            }
        }
        map<int,int> m;
        for(auto i : n) m[i]++;
        for(auto i : st){
            if(m[i]!=3) st.erase(i);
        }
        return st.size();
    }
};
