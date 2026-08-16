class Solution {
public:
    int elevatorRequests(int n, vector<int>& r) {
        int curr=0;
        int sum=0;
        for(int i=0;i<r.size();i++){
            if(r[i]==curr) curr=r[i];
            else{
                int diff= abs(curr-r[i]);
                curr=r[i];
                sum+=diff;
            }
        }
        return sum;
    }
};
