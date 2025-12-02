class Solution {
    public String longestCommonPrefix(String[] strs) {
        String ans="";

        int mini=Integer.MAX_VALUE;
        for(int i=0;i<strs.length;i++){
            int len=strs[i].length();
           mini= Math.min(len,mini);
        }

        for(int j=0;j<mini;j++){
            char ch=strs[0].charAt(j);
            boolean flag=false;    
            for(int i=1;i<strs.length;i++){
                if(ch!=strs[i].charAt(j))flag=true;
            }
            if(flag)break;
            else ans+=ch;
        }
        return ans;
    }
}