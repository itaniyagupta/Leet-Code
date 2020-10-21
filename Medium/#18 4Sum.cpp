class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>> arr;
        if (nums.size() < 4) return arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3; i++)
         {  if (target <= 0 && nums[i] > 0) break;
            if (nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target) break;
            if (nums[i] + nums[nums.size()-3] + nums[nums.size()-2] + nums[nums.size()-1] < target) continue; 
            if(i!=0 && nums[i]==nums[i-1] ) continue;
            for (int j = i+1; j<nums.size()-2; ++j)
            { 
			  if (nums[i] + nums[j] + nums[j+1] + nums[j+2] > target) break;
                if (nums[i] + nums[j] + nums[nums.size()-2] + nums[nums.size()-1] < target) continue; 
                if (j > i+1 && nums[j] == nums[j-1]) continue;
                  int k=j+1;
                  int l=nums.size()-1;
                while(k<l)
                {
                  if(nums[i]+ nums[j]+ nums[k]+nums[l] == target)
                    {
                      arr.push_back(vector<int>({nums[i], nums[j], nums[k], nums[l]}));
                      int last_k=nums[k], last_l=nums[l]; 
                      while(k<l && nums[k]==last_k)
                           k++;
                         while(k<l && nums[l]==last_l)
                           l--;    
                    } 
                else if (nums[i]+nums[j]+nums[k]+ nums[l]<target)
                    {
                        k++;
                    }
                else 
                    {
                        l--;
                    }
                }
             }
          }
        return arr;
    }
};