class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int ac = 0;
        int iac = 0;
        int role = 0; 
        for(int i=0;i<nums.size();i++){
                // acitve role 0 
                // inactive role 1
                if(nums[i]&1){
                    //swap
                    if(role ==1) role=0;
                    else role=1;
                }
                if((i+1)%6==0){
                    if(role==1) role=0;
                    else role=1;
                }
                
                if(role==1) iac+=nums[i];
                else ac+=nums[i];
        }
        return ac-iac;
    }
};
