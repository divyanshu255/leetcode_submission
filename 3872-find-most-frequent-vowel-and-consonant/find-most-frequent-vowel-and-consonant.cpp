class Solution {
public:
    bool isVowel(char ch) {

    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}
    int maxFreqSum(string s) {
        int ans=0;
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;

        }
        int cntc=0;
        int cntv=0;
        for(auto &i:mp){
            if(isVowel(i.first)){
                cntv=max(cntv,i.second);
            }
            else { cntc=max(cntc,i.second);
            }

        }
        cout<<cntc<<cntv;

        return cntc+cntv;

        
    }
};