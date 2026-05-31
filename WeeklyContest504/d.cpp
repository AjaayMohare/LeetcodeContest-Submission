class Solution {
public:
    vector<int> maximumMEX(vector<int>& nums) {
        vector<int> su;
        map<int,int> m;
        int cu = 0;
        for(int i=nums.size()-1;i>=0;i--){
            m[nums[i]]++;
            while(m.count(cu)) cu++;
            su.push_back(cu);
        }
        vector<int> ans;
        int in = 0;
        reverse(su.begin(),su.end());
        int mx = su[in];
        cu = 0;
        m.clear();
        int flag = 0;
        while(in<nums.size()){
            if(flag == 1){
                flag=0;
                mx = su[in];
            }
            m[nums[in]]++;
            while(m.count(cu)) cu++;
            if(cu == mx){
                ans.push_back(cu);
                cu=0;
                m.clear();
              
                flag=1;
            }
            in++;
            
        }
        return ans;
        
    }
};
