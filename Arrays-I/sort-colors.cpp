class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int arr[3] = {0};
        for(int i=0 ; i<nums.size() ; i++)
        {
            arr[nums[i]]++;
        }
        
        int index=0;
        for(int i=0 ; i<3 ; i++)
        {
            for(int j=0 ; j<arr[i] ; j++)
            {
                nums[index] = i;
                index++;
            }
        }
    }
};
