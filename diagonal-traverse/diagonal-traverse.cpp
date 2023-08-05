class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int i = 0, j = 0, count = 0;
        ans.push_back(mat[i][j]);
        int maxi = max(mat.size(), mat[0].size());
        while(i < 2 * maxi - 1 && j < 2 * maxi - 1){
            if(count % 2 == 0){
                i--; j++;
            }
            if(count % 2 != 0){
                i++; j--;
            }
            if(i < 0){
                 i++; count++;
            }
            if(j < 0){
                j++; count++;
            }
            if(i < mat.size() && j < mat[0].size()) ans.push_back(mat[i][j]);
        }
        return ans;
    }
};