class Solution {
public:
    
    int sum;
    vector<vector<int>> ans;
    vector<int> temp;
    
    void helper(vector<int>& candidates, int target, int index)
    {
        if(sum > target)    return;
        
        if(sum == target)   ans.push_back(temp);
        
        for(int i=index ; i<candidates.size() ; i++)
        {
            sum = sum + candidates[i];
            temp.push_back(candidates[i]);
            helper(candidates, target, i);
            sum = sum - candidates[i];
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        sum = 0;
        helper(candidates, target, 0);
        return ans;
    }
};
