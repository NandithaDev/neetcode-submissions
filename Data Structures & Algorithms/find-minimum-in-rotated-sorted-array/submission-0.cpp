class Solution {
public:
    int findMin(vector<int> &nums) {
        int left=0;
        int right=nums.size()-1;
        int mid;

        while(left<right){
            mid=left+(right-left)/2;

            if(nums[mid]>nums[right]){
                left=mid+1; //only right is considered
            }
            else{
                right=mid; //only left is considered
            }
            
            
        }
        return nums[left];

        
    }
};
