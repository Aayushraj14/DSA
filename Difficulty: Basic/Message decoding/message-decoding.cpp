bool decode(string S) {
    // your code here
    stack<char>st;
   st.push('o');
   st.push('l');
   st.push('l');
   st.push('e');
   st.push('h');
   for(int i=0;i<S.length();i++){
       if(st.empty())return true;
       if(st.top()==S[i])
       st.pop();
   }
   
     if(st.empty())return true;
     else return false;
    
}