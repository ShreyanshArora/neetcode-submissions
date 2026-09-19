class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        vector<int> res;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            int okay=target-numbers[i];
            if(mp.find(okay)!=mp.end()){
                return {mp[okay]+1,i+1};
            }
            mp[numbers[i]]=i;
        }
        return {};
    }
};
