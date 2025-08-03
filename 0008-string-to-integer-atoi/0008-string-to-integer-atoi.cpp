class Solution {
public:
    int myAtoi(string s) {
        long ans=0;
        int i=0;
        int n=s.length();
        int signedInt=1;
        while(i<n && s[i]==' ')i++;
        if(s[i]=='-'){signedInt=-1;i++;}
        else if(s[i]=='+'){signedInt=1;i++;}

        while(i<n && isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            if(ans*signedInt >=INT_MAX)return INT_MAX;
            if(ans*signedInt <=INT_MIN)return INT_MIN;
            i++;
        }
        return signedInt*ans;
    }
};