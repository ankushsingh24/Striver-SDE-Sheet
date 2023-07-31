vector<int> Solution::prevSmaller(vector<int> &A) 
{
    stack<int> st;
    int n = A.size();
    vector<int> ans(n, -1);
    st.push(A[0]);
    
    for(int i=1 ; i<n ; i++)
    {
        while(!st.empty() && A[i] <= st.top())
            st.pop();
            
        if(!st.empty())
            ans[i] = st.top();
        
        st.push(A[i]);
    }
    
    return ans;
}
