class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0) return 0;
        if(9*n < s) return -1;
        int num=0;
        for(int i=0;i<n;i++){
            int val = min(9,s);
            s-=val;
            num=num*10 + val;
        }
        return num;
    }
};
