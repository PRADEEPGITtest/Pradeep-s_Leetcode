class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>arr(2);
        int pos1=0;
        int pos2=0;
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if ((nums[i]+nums[j]) == target)
                {
                    arr[0]=i;
                    arr[1]=j;

                   
                }

            }  
        }
        return arr;
    }
};