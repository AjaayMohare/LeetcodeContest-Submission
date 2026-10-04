class Solution {
public:
    int minRotations(int n, string s) {
        string cp = s;
        reverse(cp.begin(),cp.end());
        vector<vector<int>> vt;
        vt.push_back({0,1,2,3,4,5,4,3,2,1});
        vt.push_back({1,0,1,2,3,4,5,4,3,2});
        vt.push_back({2,1,0,1,2,3,4,5,4,3});
        vt.push_back({3,2,1,0,1,2,3,4,5,4});
        vt.push_back({4,3,2,1,0,1,2,3,4,5});
        vt.push_back({5,4,3,2,1,0,1,2,3,4});
        vt.push_back({4,5,4,3,2,1,0,1,2,3});
        vt.push_back({3,4,5,4,3,2,1,0,1,2});
        vt.push_back({2,3,4,5,4,3,2,1,0,1});
        vt.push_back({1,2,3,4,5,4,3,2,1,0});
        vector<int> tv;
        tv.push_back(0);
        
        int cu = cp[0]-'0';
        for(auto i : cp){
            int val = i - '0';
            tv.push_back(tv.back()+vt[cu][val]);
            cu=val;
        }
        // for(auto i : tv) cout << i << " ";
        // cout << endl;
        reverse(tv.begin(),tv.end());
        
        int mx=0;
        cu=0;
        for(auto i : s ){
            int val = i - '0';
            mx+=vt[cu][val];
            cu=val;
        }
        int cc=0;
        cu=0;
        for(int i=0;i<s.size()-1;i++){
            int val = s[i]-'0';
            cc+=vt[cu][val];
            cu=val;
            int v1 = cp[0]-'0';
            int wh = cc+vt[cu][v1]+tv[i+1];
            mx=min(mx,wh);
            
        }
        int c1=0;
        int s1=0;
        for(auto i : cp){
            int v1 = i - '0';
            s1+=vt[c1][v1];
            c1=v1;
        }
        mx=min(mx,s1);
        return mx;
    }
};©leetcode
