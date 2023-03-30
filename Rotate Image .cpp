class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
            //take transpose of the matrix 
            for (int i = 0; i < matrix.size(); i++)
            {
                for (int j = 0; j < i; j++)
                {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }

           	//now reverse each row of the matrix
            for (int i = 0; i < matrix.size(); i++)
            {
                reverse(matrix[i].begin(), matrix[i].end());
            }    
    }
};
