#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;

    for(int i=0 ; i<kArrays.size() ; i++)
    {
        for(int j=0 ; j<kArrays[i].size() ; j++)
        {
            pq.push(kArrays[i][j]);
        }
    }

    while(!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}
