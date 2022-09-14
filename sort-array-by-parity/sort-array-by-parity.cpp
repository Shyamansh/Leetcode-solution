class Solution{
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0, j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]%2 == 0)
            {
                ++i;
                continue;
            }
            
            if(nums[j]%2 == 0)
            {
                int a = nums[i];
                nums[i] = nums[j];
                nums[j] = a;
            }
            --j;
        }
        return nums;
    }
};