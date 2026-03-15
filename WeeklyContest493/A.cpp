class Solution {
public:
    int countCommas(int n) {
        int cnt = 0;
        for(int i=1000;i<=n;i++){
            int len = 0;
            int num = i ;
            while(num){
                len++;
                num/=10;
            }
            int in = 0;
            while(len--){
                
                in++;
                if(in%3==0 && len >=1) cnt++;
            }
        }
        return cnt;
    }
};
