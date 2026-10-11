class BusBooking {
public:
    // a b c d
    int nv;
    vector<vector<int>> vt,ct;
    int tot=0;
    int bk=0;
    
    BusBooking(int n) {
        nv=n;
        vt.resize(nv,vector<int>(4,0));
        ct.resize(nv,vector<int>(4,0));
    }
    
    void toggle(string seat) {
        string st = seat;
        int sn = st[0]-'A';
        int sv=0;
        for(int i=1;i<seat.size();i++){
            int val = seat[i]-'0';
            sv=sv*10 + val;
        }
        sv--;
        //sv // sn
        if(vt[sv][sn]){
            vt[sv][sn]=0;
            tot-=ct[sv][sn];
            ct[sv][sn]=0;
            bk--;
            
        }
        else{
            vt[sv][sn]=1;
            if(sn==0 && vt[sv][1]) ct[sv][sn]=3;
            else if(sn==0 && vt[sv][1]==0) ct[sv][sn]=1;
            if(sn==3 && vt[sv][2]) ct[sv][sn]=3;
            else if (sn==3 && vt[sv][2]==0) ct[sv][sn]=1;
            if(sn==2 || sn==1) ct[sv][sn]=1;
            tot+=ct[sv][sn];
            bk++;
        }
    }
    
    int getTotalTime() {
        return tot;
    }
    
    int getMinTime() {

        return bk;
    }
};

/**
 * Your BusBooking object will be instantiated and called as such:
 * BusBooking* obj = new BusBooking(n);
 * obj->toggle(seat);
 * int param_2 = obj->getTotalTime();
 * int param_3 = obj->getMinTime();
 */
