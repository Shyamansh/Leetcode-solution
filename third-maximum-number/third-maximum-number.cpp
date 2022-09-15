class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(auto i:nums) s.insert(i);
        
        if(s.size()<3){
            auto it=s.end();
            it--;
            return *it;
        }
        auto it=s.end();
        it--; it--; it--;
        return *it;
    }
};