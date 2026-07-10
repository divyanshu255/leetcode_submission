class Solution {
public:
    string largestOddNumber(string num) {
          int i=num.length()-1;
          while((num[i]-'0')%2==0 && i>0){
            i--;
          }
          cout<<i<<endl;
          if(i==0){
            if((num[i]-'0')%2==0){
                return "";
            }
          }
          return num.substr(0,i+1);
        
    }
};