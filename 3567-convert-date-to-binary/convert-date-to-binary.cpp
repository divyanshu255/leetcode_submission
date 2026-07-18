class Solution {
public:
    string itod(int n){
        string s="";
     while(n){
            if(n%2==0){
                s+="0";
            }
            else{
              s+="1";
            }
                n=n/2;

        }
        reverse(s.begin(), s.end());

        return s;

    
        
    }
    string convertDateToBinary(string date) {
        
        string s="";
string dt = date.substr(0, 4);
        s+=itod(stoi(dt));
        s+="-";
        
        string mt = date.substr(5, 7);
        s+=itod(stoi(mt));
         s+="-";
        string yt = date.substr(8, 10);
        s+=itod(stoi(yt));

        return s;
    }
};