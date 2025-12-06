class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        while(num1<=num2){
            int q=num1;
            vector<int> v;
            while(q){
                v.push_back(q%10);
                q=q/10;
            }
            reverse(v.begin(),v.end());
            for(int i=1;i<v.size()-1;i++){
                if(v[i-1]<v[i] && v[i]>v[i+1]){
                    ans++;
                }
                else if(v[i-1]>v[i] && v[i]<v[i+1]){
                    ans++;
                }
            }
            num1++;
        }
        return ans;
    }
};
