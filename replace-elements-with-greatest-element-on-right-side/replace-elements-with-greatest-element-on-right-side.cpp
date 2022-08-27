class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int max;
        int n = arr.size();
        for(int i=0 ; i<n ; ++i)
        {   
            if(i==n-1)
            {
                arr[arr.size()-1]=-1;
            }
            else
            {
                int a = *max_element(arr.begin()+i+1, arr.end());
                arr[i] = a;
            }
        }
        
        return arr;
        
    }
};