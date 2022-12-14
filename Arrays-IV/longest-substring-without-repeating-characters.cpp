class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        vector<int> res(256, -1);
        int maxLen = 0, start = -1;
        
        for(int i=0 ; i<s.size() ; i++)
        {
            if(res[s[i]] > start)
                start = res[s[i]];
            
            res[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        
        return maxLen;
    }
};
