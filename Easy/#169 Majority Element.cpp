class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp = 0;
        int major = INT_MAX;
        for(int i=0; i<nums.size(); i++)
        {
           
            if (nums[i] == major)
            {
                temp++;
            }
            else if(temp==0)
            {
                major=nums[i];
                temp++;
            }
            else
                temp--;       
        }
        
        return major; 
    }
};