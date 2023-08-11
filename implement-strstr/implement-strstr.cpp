class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = haystack.size();
        int b = needle.size();
        
        for(int i = 0 ; i <= a - b ; ++i) // Loop until only valid comparison can be done
        {
            int temp = i;
            int j;
            
            for(j = 0 ; j < b ; ++j)
            {
                if(haystack[temp] != needle[j])
                {
                    break; // Mismatch, break out of inner loop
                }
                temp++;
            }
            
            if(j == b) {
                return i; // Complete match found
            }
        }
        
        return -1; // No match found
    }
};