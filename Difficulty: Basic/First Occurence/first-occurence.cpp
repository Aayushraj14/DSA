class Solution {
  public:
    int firstOccurence(string &txt, string &pat) {
        int ans=txt.find(pat);
        if(ans>=0 && ans<txt.length())return ans;
        else return -1;
        
    }
};