class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0;
        int x=0;
        for(auto i:s){
            if(i=='R')x++;
            else x--;
            if(x==0)cnt++;
            cout<<cnt<<i<<endl;
        }
        return cnt;

        
    }
};