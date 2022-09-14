class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i = 0, j = 0; i < size(nums); i++)
            if (nums[i]) 
                swap(nums[i], nums[j++]);
    }
};

