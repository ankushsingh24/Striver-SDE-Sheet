class Solution {
public:
    bool isPalindrome(string &s, int l, int h)
    {
        while(l < h)
        {
            if(s[l++] != s[h--])
                return false;
        }
        return true;
    }
    
    void dfs(vector<vector<string>> &res, string s, int start, vector<string> &temp)
    {
        if(start >= s.size())
            res.push_back(temp);
        
        for(int end=start ; end<s.size() ; end++)
        {
            if(isPalindrome(s, start, end))
            {
                temp.push_back(s.substr(start, end - start + 1));
                dfs(res, s, end+1, temp);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> res;
        vector<string> temp;
        
        dfs(res, s, 0, temp);
        
        return res;
    }
};
