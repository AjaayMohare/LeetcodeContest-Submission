class Solution {
public:
    int sz;
    
    vector<long long> a,lz;
    vector<unordered_map<long long,int>> mp;
    void build(int b){
        mp[b].clear();
        int l = b*sz;
        int r = min((int)a.size()-1,l+sz-1);
        for(int i=l;i<=r;i++) mp[b][a[i]]++;
    }
    void push(int b){
        if(lz[b]==0) return ;
        int l = b*sz;
        int r = min((int)a.size()-1,l+sz-1);
        for(int i=l;i<=r;i++){
            a[i]+=lz[b];
        }
        build(b);
        lz[b]=0;
    }
    vector<int> numberOfPairs(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& q) {
        //sqrt method code story with mik 
        int n = nums2.size();
        sz = ceil(sqrt(n));
         
        for(int i=0;i<nums2.size();i++) a.push_back(nums2[i]);
        int tb = (n+sz-1)/sz;
        for(int i=0;i<tb;i++){
            lz.push_back(0);
            mp.push_back({});
        }
        for(int i=0;i<tb;i++) build(i);
        vector<int> ans;
        for(int i=0;i<q.size();i++){
            if(q[i][0]==1){
                //type 1
                int l = q[i][1];
                int r = q[i][2];
                int val = q[i][3];
                int bl = l/sz;
                int br = r/sz;
                if(bl==br){
                    push(bl);
                    for(int j=l;j<=r;j++) a[j]+=val;
                    build(br);
                }
                else{
                    push(bl);
                    int e = (bl+1)*sz - 1;
                    e=min(e,n-1);
                    for(int j=l;j<=e;j++) a[j]+=val;
                    build(bl);
                    for(int j=bl+1;j<=br-1;j++) lz[j]+=val;
                    push(br);
                    int st = br*sz;
                    for(int j=st;j<=r;j++) a[j]+=val;
                    build(br);
                }
            }
            else{
                //type 2
                int total = q[i][1];
                int cnt = 0;
                for(int j=0;j<nums1.size();j++){
                    long long rem = total -nums1[j];
                    for(int k=0;k<tb;k++){
                        long long v  = rem - lz[k];
                        if(mp[k].count(v)) cnt+=mp[k][v];
                    }
                }
                ans.push_back(cnt);
            }
        }
        return ans;
    }
};
