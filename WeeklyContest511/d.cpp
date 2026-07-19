class Solution {
public:
    int minimumGroups(vector<string>& words) {
        map<string,int> m;
        for(int i=0;i<words.size();i++){
            string w = words[i];
            string ev="";
            string od="";
            for(int j=0;j<w.size();j++){
                if(j&1) od.push_back(w[j]);
                else ev.push_back(w[j]);
            }
            if(ev.size()>1){
                string t = ev+ev;
                int ci=0,cj=1,ck=0;
                int si = ev.size();
                while(ci<si && cj<si && ck<si){
                    if(t[ci+ck]==t[cj+ck]) ck++;
                    else {
                        if(t[ci+ck]>t[cj+ck]) ci+=ck+1;
                        else cj+=ck+1;
                        if(ci==cj) cj++;
                        ck=0;
                    }
                }
                int st = min(ci,cj);
                ev=t.substr(st,si);
            }
            if(od.size()>1){
                string t = od+od;
                int ci=0,cj=1,ck=0;
                int si = od.size();
                while(ci<si && cj<si && ck<si){
                    if(t[ci+ck]==t[cj+ck]) ck++;
                    else{
                        if(t[ci+ck]>t[cj+ck]) ci+=ck+1;
                        else cj+=ck+1;
                        if(ci==cj) cj++;
                        ck=0;
                    }
                }
                int st = min(ci,cj);
                od=t.substr(st,si);
            }
            cout << i+1 << " " << ev << " " <<od << endl;
            string ch  = ev+od;
            m[ch]++;
        }
        return m.size();
    }
};
