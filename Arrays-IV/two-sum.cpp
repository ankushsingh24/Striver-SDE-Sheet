class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            v.push_back({nums[i], i});
        }

        sort(v.begin(), v.end());

        int i = 0, j = n - 1;

        while (i < j)
        {
            int sum = v[i].first + v[j].first;
            if (sum == target)
            {
                return {v[i].second, v[j].second};
            }
            else if (sum < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return {-1, -1};
    }
};