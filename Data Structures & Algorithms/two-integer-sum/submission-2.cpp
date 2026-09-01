class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> count;
        for(int i=0;i<nums.size();i++){

            if(count.find(target-nums[i])!=count.end()){
                int j=count[target-nums[i]];
                return{j,i};
            }
            else{
                count[nums[i]]=i;
            }
            
            
        
        } 
    }
};
