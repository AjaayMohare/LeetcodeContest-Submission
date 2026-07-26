class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& s1, vector<vector<int>>& s2) {
        int i=0;
        int j=0;
        vector<vector<int>> ret;
        while(i<s1.size() || j<s2.size()){
            int in=-1;
            if(i==s1.size()) in=s2[j][0];
            else if(j==s2.size()) in=s1[i][0];
            else if(s1[i][0]<s2[j][0]) in=s1[i][0];
            else if(s1[i][0]>s2[j][0]) in=s2[j][0];
            else in=s1[i][0];

            int v1=0;
            if(i<s1.size()) v1=s1[i][1];
            int v2=0;
            if(j<s2.size()) v2=s2[j][1];
            ret.push_back({in,v1+v2});
            if(i<s1.size() && s1[i][0]==in) i++;
            if(j<s2.size() && s2[j][0]==in) j++;
        } 
        // for(auto j : ret) cout << j[0] << " " << j[1] << endl;
        return ret;
    }
};
