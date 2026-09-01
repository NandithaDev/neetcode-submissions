class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }
        unordered_map<char,int> counts;
        for(int i=0;i<n;i++){
            counts[s[i]]++;
        }
        
        
        unordered_map<char,int> countt;
        for(int j=0;j<m;j++){
            countt[t[j]]++;
        }

        if(countt==counts){
            return true;
        }
        else{
            return false;
        }
    }
};
