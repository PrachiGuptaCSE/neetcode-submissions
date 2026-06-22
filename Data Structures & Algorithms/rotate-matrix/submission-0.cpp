class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        /*FOLLOW 2 STEPS:
        1) FIND TRANSPOSE- DIAGONAL REMAIN SAME AND THE UPPER TRIANGLE IS EXCHANGED WITH LOWER TRIANGLE  
        2)REVERSE EVERY ROW OF THE MATRIX */
        int n=matrix.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
