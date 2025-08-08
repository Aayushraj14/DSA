class Solution {
public:
    vector<int> lexicalOrder(int n) {
         vector<int>ans;
         for(int i=1;i<=n;i++){
            ans.push_back(i);
         }
         vector<string>finalAns;
            for(auto num:ans){
                finalAns.push_back(to_string(num));
            }
            sort(finalAns.begin(),finalAns.end());
            for(int i=0;i<n;i++){
                ans[i]=stoi(finalAns[i]);
            }
            return ans;
    }
};