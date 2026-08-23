class Solution {
public:
    bool isPalindromic(string s) {
        vector<int> v;
        int i=97;
        while(v.size()<26){
            v.push_back(i);
            i++;
        }
        string ans = "";
        for(int i=0;i<s.size();i++){
            int in = s[i]-'a';
            int bn = v[in];
            cout << bn << endl;
            bn=2*bn;
            string bins = "";
            while(bn){
                bn/=2;
                if(bn&1) bins.push_back('1');
                else bins.push_back('0');
                
            }
            cout << bins << endl;
             while(bins.size()){
                 ans.push_back(bins.back());
                 bins.pop_back();
             }       
        }
        cout << ans << endl;
        string rev = ans;
        reverse(rev.begin(),rev.end());
        return ans==rev;
    }
};
