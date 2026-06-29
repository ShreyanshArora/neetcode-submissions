class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int majorityElement=n/2;
        int count=0;
        for(int i=0;i<n;i++){
            int check1=nums[i];
            for(int j=0;j<n;j++){
                if(nums[j]==nums[i]) count++;
                
            }
            if (count>majorityElement){
                return nums[i];
            }
        }
        return -1;
        
        
    }
};