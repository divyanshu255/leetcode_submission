class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string>s;
        int i=0;
        while(i<heights.size()){

        auto it=max_element(heights.begin(),heights.end())-heights.begin();
        cout<<it;
        i++;
        s.push_back(names[it]);
        heights[it]=0;
        }
        return s;
        
    }
};