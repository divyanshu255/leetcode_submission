class Solution {
public:
    bool scoreBalance(string s) {
        int tsum=0;
        bool ans=false;
        for(auto i:s){
            tsum+=(i-'a'+1);
        }
        // cout<<tsum;
        if(tsum%2!=0){
            return false;
        }
       
        int stsum=tsum/2;
         tsum=0;
           for(auto i:s){
            tsum+=(i-'a'+1);
            if(tsum==stsum){
                ans=true;
                break;
            }
        }
        cout<<tsum<<stsum;



        return ans;

        
    }
};