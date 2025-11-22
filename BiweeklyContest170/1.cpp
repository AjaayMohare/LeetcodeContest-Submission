class Solution {
public:
    int minimumFlips(int n) {
        string y="";
        int q=n;
        while(q){
            y=char((q%2)+'0')+y;
            q=q/2;
        }
        string s=y;
        reverse(s.begin(),s.end());
        int c=0;
        for(int i=0;i<y.size();i++){
            if(s[i]!=y[i]){
                c++;
            }
        }
        return c;
    }
};
