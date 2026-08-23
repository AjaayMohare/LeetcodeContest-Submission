class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        vector<bool> pr(100001,true);
        pr[0]=false;
        pr[1]=false;
        for(int i=2;i*i<pr.size();i++){
            if(pr[i]){
                for(int j=i*i;j<pr.size();j+=i) pr[j]=false;
            }
        }
        // // for(auto i : pr) cout << i << " ";
        // cout << endl;
        vector<int> all;
        for(int i=2;i<pr.size();i++){
            if(pr[i]==false) continue;
            all.push_back(i);
        }
        // cout << all.size() << endl;
        vector<int> spf(100001);
        for(int i=0;i<spf.size();i++) spf[i]=i;
        for(int i=2;i*i<spf.size();i++){
            if(spf[i]==i){
                for(int j=i*i;j<spf.size();j+=i){
                    if(spf[j]==j) spf[j]=i;
                }
            }
        }
        map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            set<int> st;
            while(val>1){
                st.insert(spf[val]);
                val/=spf[val];
            }
            vector<int> inv;
            for(auto i : st) inv.push_back(i);
            m[nums[i]]=inv;
        }
        // for(auto i : nums){
        //     cout << i << " " << m[i].size() << endl;
        // }
        int ans=0;
        int l=0;
        int r=0;
        map<int,int> mv;
        while(r<nums.size()){
           int val=nums[r];
           for(auto i : m[val]) mv[i]++;

                
            
            while(mv.size()>k ){
                for(auto i : m[nums[l]]){
                    mv[i]--;
                    if(mv[i]==0) mv.erase(i);
                }
                l++;
            }
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
