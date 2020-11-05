class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     
        map<int, int> ourMap;  
       
        for(int i=0; i<nums.size(); i++)
        {
            if(ourMap.find(nums[i]) != ourMap.end() && i - ourMap[nums[i]] <= k)
            {
                return true;
            }
           ourMap[nums[i]] = i;
        }
        return false;
    }
        
};