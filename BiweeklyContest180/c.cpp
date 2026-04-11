class Solution {
public:
    int minOperations(vector<int>& nums) {
        set<int> s;
        int n = 100000;
        vector<bool> p(n+1,true) ;
        p[0]=false;
        p[1]=false;
        for(int i=2;i*i<=n;i++){
            if(p[i]){
                for(int j=i*i;j<=n;j+=i){
                    p[j]=false;
                }
            }
        }
        vector<int> pa,np;
        np.push_back(1);
        for(int i=2;i<=n;i++){
            if(p[i]){
                pa.push_back(i);
            }
            else{
                np.push_back(i);
            }
            
        }
        pa.push_back(n+3);
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(i&1){
                int val = nums[i];
                auto it = lower_bound(np.begin(),np.end(),val);
                cnt+=(*it-val);
            }
            else{
                int val = nums[i];
                auto it = lower_bound(pa.begin(),pa.end(),val);
                cnt+=(*it-val);
            }
        }
        return cnt;
        
    }
};©leetcode
