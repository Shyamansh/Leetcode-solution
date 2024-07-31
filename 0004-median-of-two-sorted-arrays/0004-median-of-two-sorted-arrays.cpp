class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> mrg;
        int a=0,b=0;

        while(a<nums1.size() && b<nums2.size())
        {
            if(nums1[a]<=nums2[b])
            {
                mrg.push_back(nums1[a]);
                ++a;
            }

            else
            {
                mrg.push_back(nums2[b]);
                ++b;
            }
        }

        while(a<nums1.size())
        {
            mrg.push_back(nums1[a]);
            ++a;
        }

        while(b<nums2.size())
        {
            mrg.push_back(nums2[b]);
            ++b;
        }

        int len=mrg.size();
        
        if(len%2 == 1)
        {
            return mrg[len/2];
        }

        else
        {
            return ((mrg[(len-1)/2]+mrg[len/2])/2.0);
        }

    }
};