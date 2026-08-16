class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mp;
        int n=nums.size();
        for(int num:nums){
            
            if(mp.find(num)!=mp.end()) return true;
            mp.insert(num);
        }
        return false;

    }
};