class Solution {
  public:
    void addMat(vector<vector<int>>& a, vector<vector<int>>& b) {
        // Code here
        int n = a.size();
        int m = a[0].size();
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                a[i][j] = b[i][j] + a[i][j];
            }
        }
    }
};