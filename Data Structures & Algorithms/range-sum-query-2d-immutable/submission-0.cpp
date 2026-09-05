class NumMatrix {
    vector<vector<int>> matrix;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        this->matrix = matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        
        int from_col = col1;
        int to_col = col2;

        int from_row = row1;
        int to_row = row2; 
        

        for (int i = from_row; i <= to_row; i++) {
            for (int j = from_col; j <= to_col; j++) {
                sum += this->matrix[i][j];
            }
        }

        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */