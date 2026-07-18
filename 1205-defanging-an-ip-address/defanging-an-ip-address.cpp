class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for(auto i:address){
          if(i=='.')s.append("[.]");
          else s.push_back(i);
        }
        return s;
        
    }
};