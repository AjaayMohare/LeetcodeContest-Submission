class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> d(10,0);
        int cp  =n;
        while(cp){
            d[cp%10]++;
            cp/=10;
        }
        int sum = 0;
        for(int i=0;i<d.size();i++){
            sum+=(i*d[i]);
        }
        return sum;
    }
};
