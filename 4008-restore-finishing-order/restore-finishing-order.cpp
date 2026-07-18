class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>v;
        for(auto i:order){
            auto it=find(friends.begin(),friends.end(),i);
            if(it != friends.end()){
                v.push_back(i);
            }

        }
        
        return v;
    }
};