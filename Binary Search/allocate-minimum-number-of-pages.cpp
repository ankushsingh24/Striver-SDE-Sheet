bool valid(vector<int> &A, int B, int mid, int n)
{
    int cnt = 0, sum = 0;
    
    for(int i=0 ; i<n ; i++)
    {
        if(sum + A[i] <= mid)
            sum += A[i];
        else
        {
            cnt++; 
            sum = 0;
            sum += A[i];
        }
    }
    
    return cnt < B;
}

int Solution::books(vector<int> &A, int B) 
{
    int n = A.size();
    
    if(B > n)
        return -1;
        
    int total = 0, maxi = 0, ans = 0;
    
    for(int a: A)
    {
        total += a;
        maxi = max(maxi, a);
    }
    
    int left = maxi, right = total;
    
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        
        if(valid(A, B, mid, n))
        {
            ans = mid;
            right = mid - 1;
        }
        
        else
            left = mid + 1;
    }
    
    return ans;
}
