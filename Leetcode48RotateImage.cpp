class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Transpose
        for(int i=0; i<matrix.size();i++){
            for(int j=i ; j<matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Reverse each row
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};