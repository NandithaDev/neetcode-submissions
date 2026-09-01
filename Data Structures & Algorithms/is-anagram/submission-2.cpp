class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }
        unordered_map<char,int> count;
        for(int i=0;i<n;i++){
            count[s[i]]++;;
        }
       
        for(int j=0;j<m;j++){
            count[t[j]]--;
        }
        for(auto pair:count){
            if(pair.second!=0){
                return false;
            }
        }
        return true;
       

        
    }
};
