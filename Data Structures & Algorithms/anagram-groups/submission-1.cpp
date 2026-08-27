class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> st;
        for(string c:strs){
            string key=c;
            sort(key.begin(),key.end());
            
            st[key].push_back(c);

        }
        vector<vector<string>> ans;
        for(auto &pair:st){
            ans.push_back(pair.second);
        }
        return ans;
        
        
    }
};
