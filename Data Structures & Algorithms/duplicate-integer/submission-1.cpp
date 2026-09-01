class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,bool> dupl;

        for(int i=0;i<nums.size();i++){
            
            
                if(dupl[nums[i]]==true){
                    return true;
                }
            
            dupl[nums[i]]=true;
        }
        return false;
    }
};