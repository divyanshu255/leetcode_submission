class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans=0;
        int x=0;
        for(auto i:s){
            ans=ans+abs((int)t.find(i)-x);
            x++;
        }

        return ans;

        
    }
};