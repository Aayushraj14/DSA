
class Solution {
  public:
    int getCarries(string N, string M) {
        // code here
        reverse(N.begin(),N.end());
        reverse(M.begin(),M.end());
        int carry=0;
        int count=0;
        int i=0,j=0;
        while(i<N.length() && j<M.length()){
            int totalSum=(N[i]-'0')+(M[j]-'0')+carry;
            carry=totalSum/10;
            if(carry)count++;
            i++;
            j++;
            
        }
        while(i<N.length()){
             int totalSum=(N[i]-'0')+carry;
            carry=totalSum/10;
            if(carry)count++;
            i++;
        }
        
        
          while(j<M.length()){
             int totalSum=(M[j]-'0')+carry;
            carry=totalSum/10;
            if(carry)count++;
            j++;
        }
        return count;
    }
};