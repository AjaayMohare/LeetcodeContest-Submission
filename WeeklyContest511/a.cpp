class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int s =start[0]+start[1];
        int t=target[0]+target[1];
        return (s%2 == t%2);
    }
};
