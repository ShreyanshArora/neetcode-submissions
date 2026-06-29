class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int k=0;
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                temp.push_back(nums[i]);
                k++;
            }
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }
        return k;
    }
};