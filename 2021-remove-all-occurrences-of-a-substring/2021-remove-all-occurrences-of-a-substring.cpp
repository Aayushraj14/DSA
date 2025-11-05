class Solution {
public:
  
    string removeOccurrences(string s, string part) {
        
        while(!s.empty()){
        if(s.find(part)==string::npos)return s;
        else{
            int start=s.find(part);
            int end=start+part.size();
            string temp=s.substr(0,start)+s.substr(end,s.size());
            s=temp;

        }
        }
        return s;
    }
};