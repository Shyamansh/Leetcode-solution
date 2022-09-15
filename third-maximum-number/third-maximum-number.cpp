class Solution {
public:
    int thirdMax(vector<int>& nums) {
	
	
        sort(nums.begin(),nums.end());
		
		
        vector<int> ans;
		
		
        ans.push_back(nums[0]);
		
		
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
		
		
        if(ans.size()<3)
            return ans[ans.size()-1];
			
			
        else
            return ans[ans.size()-3];
       
    }
};