class Solution {
public:
    int f(int y){
        if(y==0) return 1;
        return y*f(y-1);
    }
    bool isDigitorialPermutation(int n) {
        vector<int> v;
        int cp =n;
        while(cp){
            v.push_back(cp%10);
            cp/=10;
        } 
        int sum = 0;
        for(int i=0;i<v.size();i++){
            sum += f(v[i]);
        }
        vector<int> fi ;
        multiset<int> se,te;
        for(int i=0;i<v.size();i++){
            se.insert(v[i]);
        }
        while(sum){
            fi.push_back(sum%10);
            sum/=10;
        }
        for(int i=0;i<fi.size();i++){
            te.insert(fi[i]);
        }
        return se==te;

    }
};
