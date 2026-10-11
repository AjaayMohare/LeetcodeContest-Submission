class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<int> pr;
        vector<bool> st(n+1,true);
        st[0]=false;
        st[1]=false;
        for(int i=2;i<=n;i++){
            if(st[i]){
                for(int j=2*i;j<=n;j+=i){
                    st[j]=false;
                }
            }
        }
        
        for(int i=0;i<=n;i++){
            if(st[i]==true) pr.push_back(i);
        }
        // for(auto i : pr) cout << i << " ";
        // cout << endl;
        // prime numbe colection done?
        vector<int> ans;
        int sum=0;
        int in=0;
        while(true){
            if(in<pr.size()){
                sum+=pr[in];
                if(sum>s)break;
                ans.push_back(pr[in]);
                in++;
            }
            else break;
        }
        return ans;
    }
};
