class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> count1;
        for(char s:s1){
            count1[s]++;
        }
        int l=0;
        unordered_map<char,int> count2;
        for(int r=0;r<s2.size();r++){
            count2[s2[r]]++;
            if((r-l+1)>s1.size()){
                count2[s2[l]]--;
                if (count2[s2[l]] == 0) {
                    count2.erase(s2[l]);
                }
                l++;
            }
            
            if (r-l+1==s1.size()){
                if(count1==count2){
                    return true;
                }
            }
        }
        return false;
        
        
    }
};
