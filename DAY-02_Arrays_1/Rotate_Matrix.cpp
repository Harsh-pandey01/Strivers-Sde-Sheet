// We have given a matrix and we have to rotate the matrix 90

/*
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose liya humne pahle
        int row = matrix.size() ;
        int col = matrix[0].size() ;
        for(int i = 0 ; i < row ; i++){
            for(int j = i ; j <col ; j++){
                swap(matrix[i][j] , matrix[j][i]) ; 
            }
        }

        // transpose lene ke baad abhi rotate kar rhna hai
        for(int i = 0 ; i< row ; i++){
            for(int j = 0 ; j < col/2 ;j++){
                swap(matrix[i][j], matrix[i][col -j-1]);
            }
        }
    }
};
*/



























