class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<int>s;
        for(auto i:allowed){
            s.insert(i);
        }
        int ans=0;
        for(auto x:words){
            bool flag=true;
            for(auto i:x){
                if(!s.count(i))flag=false;
            }
            if(flag)ans++;
        }
        return ans;
        
    }
};