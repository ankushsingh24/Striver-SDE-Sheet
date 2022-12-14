class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(!nums.size())
           return 0;
        
        int longest = 0, cur_longest = 1;
        
        sort(nums.begin(), nums.end());
        
        for(int i=1 ; i<nums.size() ; i++)
        {
            if(nums[i] == nums[i-1])
                continue;
            
            else if(nums[i] == nums[i-1] + 1)
                cur_longest++;
            
            else 
            {
                longest = max(longest, cur_longest);
                cur_longest = 1;
            }
        }
        
        return max(longest, cur_longest);
    }
};
