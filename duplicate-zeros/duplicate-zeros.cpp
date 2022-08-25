#include <vector>
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i =0 ; i<arr.size() ; ++i)
        {
            if(arr[i] == 0)    
            {
                auto p = arr.begin()+i;
                arr.insert(p,0);
                arr.pop_back();                
                ++i;
            }
        }
    }
};