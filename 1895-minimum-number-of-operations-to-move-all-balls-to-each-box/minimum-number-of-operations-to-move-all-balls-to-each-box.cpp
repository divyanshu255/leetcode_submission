class Solution {
public:
    vector<int> minOperations(string boxes) {
       vector<int>ones;
       vector<int>ans;

       for(int i=0;i<boxes.length();i++){
        if(boxes[i]=='1')ones.push_back(i);
       }
       for(int i=0;i<boxes.length();i++){
        int temp=0;
        for(auto j:ones){
            temp+=(abs(i-j));
        }
        cout<<temp;
        ans.push_back(temp);
       }


       return ans;
    }
};