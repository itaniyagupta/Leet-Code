class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int, bool> ourMap;  
        for(int i=0; i<nums.size(); i++)
        {
            if(ourMap.count(nums[i])> 0)
            {
                return true;
            }
           ourMap[nums[i]] = true;
        }
        return false;
    }
};