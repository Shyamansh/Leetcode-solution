class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int a=0,b=1;
        while(numbers[a]+numbers[b] != target)
        {
            if(numbers[a]+numbers[b]<target)
            {
                ++a;
                ++b;
            }
            
            else
            {
                --a;
            }
        }
        
        res.push_back(a+1);
        res.push_back(b+1);
        
        return res;
    }
};