class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        vector<vector<string>>result;
        
         for(int i=0;i<strs.size();i++){
            string copy=strs[i];
            sort(copy.begin(),copy.end());

            groups[copy].push_back(strs[i]);

         }
         for(auto pair : groups){
            
            result.push_back(pair.second);

}
         


       return result; 
    }
};
