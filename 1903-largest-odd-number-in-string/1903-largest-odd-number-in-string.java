class Solution {
    public String largestOddNumber(String num) {
        String ans="";
       int i=num.length()-1;

       while(i>=0 && ( num.charAt(i)-'0')%2==0)i--;
       
       for(int j=0;j<=i;j++){
        ans+=num.charAt(j);
       }
       return ans;
    }
}