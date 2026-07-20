class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans="";
        int one=count(s.begin(),s.end(),'1');
        int zero=count(s.begin(),s.end(),'0');
        while(one>1){
            ans+="1";
            one--;
        }
        while(zero){
            ans+="0";
            zero--;
        }
        if(one==1)ans+="1";
        return ans;
    }
};