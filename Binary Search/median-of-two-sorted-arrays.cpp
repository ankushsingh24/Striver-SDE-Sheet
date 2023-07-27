class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> a;
        int i=0, j=0;
            
        for( ; i < nums1.size() && j < nums2.size() ; )
        {
            if(nums1[i] < nums2[j])
            {
                a.push_back(nums1[i]);
                i++;
            }
            else
            {
                a.push_back(nums2[j]);
                j++;
            }  
        }
        
        for( ; i < nums1.size() ; i++)
        {
            a.push_back(nums1[i]);
        }
        
        for( ; j < nums2.size() ; j++)
        {
            a.push_back(nums2[j]);
        }
        
        int n = a.size();
        
        // for(int i=0 ; i<n ; i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        
        if(n%2 != 0)
            return float(a[n/2]);
        else
        {
            return float(a[n/2] + a[n/2 - 1])/2;
        }    
        
        return 0;
    }
};
