class Solution {
  public:
    bool clockwise(string &s1,string &s2){
        reverse(s1.begin(),s1.end());
        reverse(s1.begin(),s1.begin()+s1.length()-2);
        reverse(s1.begin()+s1.length()-2,s1.end());
        
        return (s1==s2);
    }
    bool anticlockwise(string&s1,string &s2){
        reverse(s1.begin(),s1.end());
        reverse(s1.begin(),s1.begin()+2);
        reverse(s1.begin()+2,s1.end());
        
        return (s1==s2);
    }
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.length()!=s2.length())return false;
        if(s1.length()<=2)return s1==s2;
        
        // bool ans1=clockwise(s1,s2);
        // bool ans2=anticlockwise(s1,s2);
        // return (ans1||ans2);
        
        string clockwise=s1.substr(2)+s1.substr(0,2);
        string anticlock=s1.substr(s1.length()-2)+s1.substr(0,s1.length()-2);
        
        return (clockwise==s2 || anticlock==s2);
        
    }
};
