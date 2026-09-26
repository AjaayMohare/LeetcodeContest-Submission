class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        // int ans = 0;
        // for(int i=0;i<nums.size();i++){
        //     int v1 = nums[i];
        //     vector<int> p1,p2;
        //     p1.push_back(0);
        //     p2.push_back(0);
        //     for(int j=0;j<nums.size();j++){
        //         if(i==j){
        //             p1.push_back(p1.back()+v1);
        //         }
        //         else p1.push_back(p1.back()+nums[j]);
                
        //     }
        //     for(int j=0;j<nums.size();j++){
        //         if(i==j){
        //             p2.push_back(p2.back()-v1);
        //         }
        //         else p2.push_back(p2.back()+nums[j]);
                
        //     }
        //     // p1 and p2 done
        //     // going n3 
        //     // dp??
            
            
        // }
        // // prefic array 
        // // sum
        // // how can you store // home wany number is l to r give sum thsi
        vector<int> pr;
        int ans = 0;
        pr.push_back(0);
        for(auto i : nums) pr.push_back(pr.back()+i);
        for(int i=0;i<nums.size();i++){
            map<int,int> ms;
            for(int j=i;j<nums.size();j++){
                    // i  to j
                int st  = ((pr[j+1]-pr[i])%k+k)%k;
                ms[((2*nums[j])%k+k)%k]++;
                if(st==0) ans=max(ans,j-i+1);
                else if(ms.count(st)) ans=max(ans,j-i+1);
                
                
            }
        }
        return ans;
    }
};
