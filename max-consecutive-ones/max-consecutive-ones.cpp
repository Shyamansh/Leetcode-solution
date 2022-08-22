class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int temp=0, maximum=-1;
        
        for(int i=0 ; i<nums.size() ; ++i)
        {
            if(nums[i] ==1 )
            {
               ++count;
            }
            else
            {
                maximum = std::max(maximum, count);
                count = 0;
            }
        }
        maximum = std::max(maximum, count);
        return maximum;
    }
};