class Solution {
public:
    bool threeFibonacciSum(int n) {
        vector<int> f;
        f.push_back(0);
        f.push_back(1);
        while(true){
            int s = f.size();
            f.push_back(f[s-2]+f[s-1]);
            if(f[s]+f[s-1]+f[s-2]<n) continue;
            if(f[s]+f[s-1]+f[s-2]==n) return true;
            else break;
        }
        return false;
    }
};
