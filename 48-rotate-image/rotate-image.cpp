class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        //STEP 1: TRANSPOSE OF MATRIX

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // STEP 2: REVERSE THE WHOLE TRANSPOSED MATRIX
        for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};