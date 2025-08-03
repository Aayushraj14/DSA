class Solution {
public:
    int romanToInt(string s) {
        //i,x,c

        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='M')ans+=1000;
            if(s[i]=='D')ans+=500;
            if(s[i]=='C'){
                if(i+1<s.length() && s[i+1]=='M'){ans+=900; i++;}
                else if(i+1<s.length() && s[i+1]=='D'){ans+=400; i++;}
                else ans+=100;
            }
            if(s[i]=='L'){
                ans+=50;
            }
            if(s[i]=='X'){
                if(i+1<s.length() && s[i+1]=='C'){ans+=90; i++;}
                else if(i+1<s.length() && s[i+1]=='L'){ans+=40; i++;}
                else ans+=10;
            }
            if(s[i]=='V'){
                ans+=5;
            }
            if(s[i]=='I'){
                if(i+1<s.length() && s[i+1]=='X'){ans+=9; i++;}
                else if(i+1<s.length() && s[i+1]=='V'){ans+=4; i++;}
                else ans+=1;
            }
              
        }
        return ans;
    }
};