class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> c(numRows);
        for(int i=0; i<numRows; i++)
        {   c[i].resize(i+1);
            c[i][0] = c[i][i]=1;
            for(int j=1; j<i; j++)
            {
            c[i][j] = c[i-1][j-1] + c[i-1][j];   
            }
        }
       return c;
    }
};