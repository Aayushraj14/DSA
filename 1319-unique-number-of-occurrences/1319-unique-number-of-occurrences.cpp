class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        set<int>st;
        for(auto m:mp){
            if(st.find(m.second)==st.end()){
                st.insert(m.second);
            }
            else return false;
        }
        return true;
    }
};