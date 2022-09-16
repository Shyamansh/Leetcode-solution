class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int temp=0;
        vector <int> ret;
        set <int> a;
        
        for(int i=0;i<nums.size();i++)
        {
            a.insert(nums[i]);
        }
        
        set <int> :: iterator t = a.begin();
        for(int i=0 ; i<nums.size() ; ++i)
        {
            cout<<*t<<" "<<i+1<<endl;
            if(i+1 != *t)
            {
                ret.push_back(i+1);
                continue;
            }
            
            ++t;
        }
        
        return ret;
    }
};