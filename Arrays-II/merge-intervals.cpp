class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans{intervals[0]};    
        for(auto i : intervals)
        {
            if(i[0] <= ans.back()[1])
                ans.back()[1] = max(ans.back()[1], i[1]);
            else
                ans.push_back(i);
        }
        
        return ans;
    }
};
