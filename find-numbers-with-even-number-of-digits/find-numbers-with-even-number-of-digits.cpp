#include<string>
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        
        for(int i=0 ; i<nums.size() ; ++i)
        {
            string a = to_string(nums[i]);
            
            if(a.length() % 2 == 0)
            {
                count++;
            }
        }
        
        return count;
    }
};