class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        map<int,int> m;
        for(auto i : nums) m[i]++;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                if(m[nums[i]]==1) return nums[i];
            }
        }
        return -1;
    }
};©leetcode
