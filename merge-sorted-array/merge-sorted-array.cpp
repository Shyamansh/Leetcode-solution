class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        temp.insert(temp.begin(), nums1.begin(), nums1.begin()+m);
        temp.insert(temp.begin(), nums2.begin(), nums2.begin()+n);
        sort(temp.begin(), temp.end());
        
        nums1.clear();
        
        nums1.insert(nums1.begin(), temp.begin(), temp.end());
    }
};