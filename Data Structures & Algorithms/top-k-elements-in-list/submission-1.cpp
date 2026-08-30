class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<pair<int,int>> st;
        for(const auto& p:mp){
            st.push_back({p.second,p.first});
        }
        sort(st.rbegin(),st.rend());
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(st[i].second);
        }
        return res;
        
    }
};
