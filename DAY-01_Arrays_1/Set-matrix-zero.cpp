// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int r = matrix.size();
//         int cols = matrix[0].size();
//         int *row = new int[r]{0};
//         int *col = new int[cols]{0};
//         for(int i = 0; i < r ; i++){
//             for(int j = 0 ; j < cols ; j++){
//                 if(matrix[i][j]==0){
//                     row[i]=1 ;
//                     col[j]=1 ;
//                 }
//             }
//         }
//         for(int i = 0; i < r ; i++){
//             for(int j = 0 ; j < cols ; j++){
//                 if(row[i] || col[j]){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//         delete[]row;
//         delete[]col;
//     }
// };