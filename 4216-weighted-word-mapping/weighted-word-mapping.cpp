class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string stg="";
        for(auto i:words){
            int sum=0;
            for(auto x:i){
                sum+=weights[x-'a'];
            }
            cout<<sum;
            stg+=('z'-sum%26);
        }
        return stg;
        
    }
};