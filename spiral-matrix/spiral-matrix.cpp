class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
         vector<int>ans;
        int m = matrix[0].size();
        int startrow=0;
        int startcol=0;
        int endrow=n-1;
        int endcol=m-1;
        int total=n*m;
        int count =0;
        while(count<total)
        {
            // starting row 
            for(int i = startcol; count<total && i<=endcol;i++)
            {
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;
            // ending col
            for(int i = startrow; count<total && i<=endrow;i++)
            {
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            // ending row
            for(int i = endcol; count<total && i>=startcol;i--)
            {
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            // starting col
            for(int i = endrow; count<total && i>=startrow;i--)
            {
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
        
    }
};