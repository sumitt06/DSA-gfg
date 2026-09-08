class Solution {
  public:
    vector<int> rowSum(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size();
        int m = mat[0].size();
        vector<int> list(n);

        for(int i = 0 ; i < n ; i++) {
            int sum = 0;
            for(int j = 0 ; j < m ; j++) {
                 sum += mat[i][j];
            }
            list[i] = sum;
        }
        return list;
    }
};
