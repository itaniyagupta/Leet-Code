class Solution {
public:
    int singleNumber(vector<int>& nums) {
       
        sort(nums.begin(), nums.end());
         int answer = nums[0];
        for(int i=1; i<nums.size(); i++)
        { 
            
            if(nums[i] != nums[i-1]  && nums[i+1]!=nums[i] && i<=nums.size()-2)
            {
                answer = nums[i];
                break;
            }
          if(i==nums.size()-1 && nums[i]!=nums[i-1])
            {
              answer = nums[i];
                break;
            }
        }
        
        return answer;
        
    }
};