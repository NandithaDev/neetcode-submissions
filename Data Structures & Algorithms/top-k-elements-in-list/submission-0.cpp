class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> groups;
    
        for(int i=0;i<nums.size();i++){
            groups[nums[i]]+=1;
        }

        vector<pair<int,int>>freq;
        for(auto pair:groups){
            freq.push_back({pair.first,pair.second});
        }
        vector<int> result;
        for(int j=0;j<k;j++){
            int largestFreq=0;
            int largestIndex;
            int largestPosition;
            for(int i = 0; i < freq.size(); i++){
                if(freq[i].second > largestFreq){
                    largestFreq = freq[i].second;
                    largestIndex = freq[i].first;
                    largestPosition=i;
}}
            result.push_back(largestIndex);
            freq.erase(freq.begin() + largestPosition);
            
        }
        return result;
    }
};
