class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max = nums[0], max1=INT_MIN, max2=INT_MIN;
        sort(nums.begin(),nums.end());
        auto it = std::unique(nums.begin(), nums.end());
        
        nums.resize(std::distance(nums.begin(), it));
        
        for(int i=0 ; i<nums.size() ; ++i)
        {
            cout<<nums[i]<<endl;
        }
        
        if(nums.size()<3)
        {
            if(nums.size()==1)
                return nums[0];
            
            else
            {
                if(nums[0]<nums[1])
                {
                    return nums[1];
                }
                
                else
                {
                    return nums[0];
                }
            }
        }
        
        
        for(int i = 0 ; i<nums.size() ; ++i)
        {
            if(max<nums[i])
                max=nums[i];
        }
        
        
        for(int i = 0 ; i<nums.size() ; ++i)
        {
            if(max1<nums[i] && nums[i]<max)
                max1=nums[i];
        }
        
        for(int i = 0 ; i<nums.size() ; ++i)
        {
            if(max2<nums[i] && nums[i]<max1)
                max2=nums[i];
        }
        
        return max2;
        
    }
};