class Solution {
public:
    bool isThree(int n) {
        int cnt=0;
        int s=2;
        while(cnt!=2 && s<n){
            if(n%s ==0) cnt++;
            s++;

        }
        if(cnt==1)return true;
        return false;
    }
};