class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int count =0;
         if(nums.size() == 0) 
        {
            return 0;
        }
        for(int i=0; i<nums.size();++i)
        {
            if(nums[i]!=nums[count]) 
            {
                nums[++count] = nums[i];
            }
        }
        return count+1;
    }
};