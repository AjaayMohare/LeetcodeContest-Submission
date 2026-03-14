class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        int sw = 0;
        map<int,int> m1,m2;
        for(auto i : nums1) m1[i]++;
        for(auto i : nums2) m2[i]++;
        for(auto i : m1){
            if(m2.count(i.first)){
                int v1 = i.second;
                int v2 = m2[i.first];
                if(abs(v2-v1)%2==0) sw+=(abs(v2-v1)/2);
                else return -1;
            }
            else if(i.second%2==0){
                sw+=(i.second/2);
            }
            else if(i.second%2==1) return -1;
        }
        for(auto i : m2){
            if(m1.count(i.first)){
                continue;
            }
            else if(i.second%2==0){
                sw+=(i.second/2);
            }
            else if(i.second%2==1) return -1;
        }
        return sw/2;
    }
};©leetcode
