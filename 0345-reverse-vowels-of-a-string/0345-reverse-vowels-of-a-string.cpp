class Solution {
public:
    string reverseVowels(string s) {
        int start=0;
        int end=s.size()-1;

        while(start<=end){
            char ch=s[start];
            char ch2=s[end];
            if(ch=='a' || ch=='e'|| ch=='i'||ch=='o'||ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U'){
                if(ch2=='a' || ch2=='e'|| ch2=='i'||ch2=='o'||ch2=='u' || ch2=='A' || ch2=='E' || ch2=='I' || ch2=='O'|| ch2=='U'){
                    swap(s[start],s[end]);
                    start++;
                    end--;
                }
                else{
                    end--;
                }
            }
            else{
                start++;
            }
        }
        return s;
    }
};