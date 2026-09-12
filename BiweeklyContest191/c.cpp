
class Solution {
public:
    int minDays(int n) {
        // vector<int> hs;
        // hs.push_back(0);
        // int cur=1;
        
        // while(hs.back()<=100000){
        //     hs.push_back(hs.back()+cur);
        //     cur++;
        // }
        // // for(auto i : hs) cout << i << " ";
        // // cout << endl;
        // int diff=0;
        // int days=0;
        // while(n){
        //     int val=0;
        //     int d=0;
        //     for(int i=1;i<hs.size();i++){
        //         if(hs[i]<=n){
        //             d=i;
        //             val=hs[i];
        //         }
        //         else break;
        //     } 
        //     cout << val << " " << days << endl;
        //     days+=d;
        //     n-=val;
        //     if(n>0) days++;
        // }
        // return days;
        // int d=0;
        // long long s=0;
        // while(s<n){
        //     d++;
        //     s+=n;
        // }
        // return d;
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j*(j+1)/2 <=i ;j++){
                int x=j*(j+1)/2;
                if(i==x) dp[i]=min(dp[i],j);
                else dp[i]=min(dp[i],dp[i-x]+j+1);
            }
        }
        return dp[n];
    }
};
