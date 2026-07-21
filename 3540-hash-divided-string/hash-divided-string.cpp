class Solution {
public:
    string stringHash(string s, int k) {
        string ans="";
        int i=0;
        int temp=0;

        for(auto x:s){
            
          
                i++;
                temp=temp+(x-'a');
                if(i==k){
                ans=ans+(char)(temp%26+'a');
                i=0;
                temp=0;

                }
            
        }

        return ans;
        
    }
};