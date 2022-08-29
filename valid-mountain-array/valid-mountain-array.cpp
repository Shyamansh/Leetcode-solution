class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3)
            return false;
        
        int flag = 0, i = 0;
        for (i = 1; i < arr.size(); i++)
            if (arr[i] <= arr[i - 1])
                break;
 
        if (i == arr.size() || i == 1)
            return false;
 
        for (; i < arr.size(); i++)
            if (arr[i] >= arr[i - 1])
                break;
        return i == arr.size();
    }
};

