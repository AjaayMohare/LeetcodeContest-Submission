class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        // vector<int> pr;
        // int ans=0;
        // pr.push_back(0);
        // for(auto i : nums) pr.push_back(pr.back()+i);
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i;j<nums.size();j++){
        //         // i...j subaray 
        //         int sum = pr[j+1]-pr[i];
        //         if(sum%k!=0) continue;
        //         bool flag=true;
        //         for(int t=i;t<=j;t++){
        //             if((sum-nums[t])%k) flag=false;
        //         }
        //         if(flag) ans=max(ans,j-i+1);
        //     }
        // }
        // return ans;
        vector<int> rem;
        for(auto i :nums) rem.push_back(i%k);
        int ans=1;
        int  i=0;
        int  j=0;
        int cnt=1;
        while(j<nums.size()){
            if(j>0 && rem[j]==rem[j-1]) cnt++;
            else cnt=1;
            int r=rem[j];
            if(r==0) ans=max(ans,cnt);
            else if(((cnt-1)*r)%k==0) ans=max(ans,cnt);
            j++;
        }
        return ans;
    }
};
