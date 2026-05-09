class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int cnt =0;
        int s =0;
        for(int i=0;i<events.size();i++){
            if(cnt==10) return {s,cnt};
            if(events[i]=="W") cnt++;
            else if(events[i]=="WD" || events[i]=="NB") s++;
            else s+=(events[i][0]-'0');
        }
        return {s,cnt};
    }
};
