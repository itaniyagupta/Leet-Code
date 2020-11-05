class Solution {
public:
    vector<int> arr = {};
    vector<vector<int>> getAllchoices(int curIndex, int target){ 
    if (target < 0) return {};
    if (target == 0) return {{}};
    if(curIndex ==arr.size()) return {};
    
    int curNumber = arr[curIndex];
   vector<vector<int>> ans = getAllchoices (curIndex+1, target);
   vector<vector<int>> other = getAllchoices(curIndex, target - curNumber);
    for(vector<int> c : other)
    {
        c.push_back(curNumber);
        ans.push_back(c);
    }
    
    return ans;
    }

    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        arr = candidates;
        return getAllchoices(0, target);
        
    }
};