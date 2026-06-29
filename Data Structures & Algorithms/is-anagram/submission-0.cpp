class Solution {
public:
    int isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        cout<<s<<endl;
        sort(s.begin(),s.end());
        cout<<s<<endl;
        sort(t.begin(),t.end());
        cout<<t;
        return s==t;

        
        
    }
};
