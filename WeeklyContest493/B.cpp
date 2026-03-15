class Solution {
public:
    long long countCommas(long long n) {
       long long cnt =0 ;
        long long st = 1000;
        while(st<=n){
            cnt+=1LL*(n-st+1);
            st*=1000LL;
        }
        return cnt;
    }
};
