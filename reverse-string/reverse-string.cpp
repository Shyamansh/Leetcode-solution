class Solution {
public:
    
    void swap(char& a, char& b)
    {
        char temp;
        temp = a;
        a = b;
        b = temp;
    }
    
    
    void reverseString(vector<char>& s) {
        int a = s.size();
        int i=0,j=a-1;
        
        while(i<j)
        {
            swap(s[i], s[j]);
            ++i;
            --j;
        }
    }
};