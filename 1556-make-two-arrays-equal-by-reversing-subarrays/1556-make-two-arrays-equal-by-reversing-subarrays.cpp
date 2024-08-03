class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        auto it= target.end();

        sort(arr.begin(), arr.end());
        sort(target.begin(), target.end());

        if(arr==target){
            return true;
        }


        return false;
    }
};