class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int aa=0;
        int bb=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                aa++;
            }
            else{
                bb++;
            }
        }
        return abs(aa-bb);
    }
};
