class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        vector<pair<char, int>> vec(mp.begin(), mp.end());
        string ans="";
        // for(const [key,val] of sortedmp){
        //     cout<<key;
        // }
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
    return a.second > b.second;
});
        for (auto &it : vec) {

        cout << it.first << " " << it.second << endl;
        while(it.second--){
            ans+=it.first;
        }
    }

        return ans;
        
    }
};