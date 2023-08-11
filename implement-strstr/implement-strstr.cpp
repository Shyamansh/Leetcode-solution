class Solution {
public:
    int strStr(string haystack, string needle) {
        int a = haystack.size();
        int b = needle.size();
        int tmp=0;
        
        for(int i = 0 ; i<a ; ++i)
        {
            if(haystack[i] == needle[tmp])
            {
                int temp=i;
                int flag = 0;
                for(int j=0 ; j<b ; j++, temp++)
                {
                    if(haystack[temp] != needle[j])
                    {
                        flag = 1;
                        break;
                    }
                    
//                     if(haystack[temp] == needle[j])
//                     {
//                         ++temp;
//                         if(temp == b)
//                         {
//                             return i;
//                         }
//                     }
                    
//                     else
//                         break;
                }
                if(flag == 0)
                {
                    return i;
                }
            }
        }
        
        return -1;
    }
};