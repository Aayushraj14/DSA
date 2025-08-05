// User function Template for C++

class Solution {
  public:
  vector<string>ans;
  bool conOnes(string s){
      int i=0;
      while(i<s.length()-1){
          if(s[i]=='1' && s[i+1]=='1')return true;
          i++;
      }
      return false;
  }
  void solve(int num,string output){
      if(num==0){
          if(conOnes(output))return;
          else ans.push_back(output);
          return;
      }
      
      output.push_back('0');
      solve(num-1,output);
      output.pop_back();
      
      output.push_back('1');
      solve(num-1,output);
      output.pop_back();
      
  }
    vector<string> generateBinaryStrings(int num) {
        // Write your code
        string output="";
        solve(num,output);
        return ans;
    }
};