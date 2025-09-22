// User function Template for C++
class Solution {
  public:
    int reverse(int n){
        string s1=to_string(n);
        
        //reverse(s1.begin(),s1.end());
        int start=0;
        int end=s1.length()-1;
        while(start<=end){
            swap(s1[start],s1[end]);
            start++;
            end--;
        }
        int ans=stoi(s1);
        return ans;
    }
    bool palindrome(string s){
        int start=0,end=s.size()-1;
        while(start<=end){
            if(s[start]!=s[end])return false;
            start++;
            end--;
        }
        return true;
    }
    int isSumPalindrome(int n) {
        // code here
        int sum=n;
        if(palindrome(to_string(sum)))return sum;
        int count=0;
        while(count<5 ){
            int rev=reverse(sum);
            sum+=rev;
            if(palindrome(to_string(sum)))return sum;
            count++;
        }
        return -1;
        
    }
};