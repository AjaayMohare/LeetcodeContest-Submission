class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            int val = nums[i];
            while(val){
                if(val%10==digit) cnt++;
                val/=10;
            }
        }
        return cnt;
    }
};©leetcode
