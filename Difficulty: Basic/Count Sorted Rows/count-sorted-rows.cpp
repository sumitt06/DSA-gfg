class Solution {
	public:
	int sortedCount(vector<vector<int>> &mat) {
		// code here
		int cnt = 0;
		int n = mat.size();
		int m = mat[0].size();
		for (int i = 0 ; i < n ; i++) {
			int incOrder = 1;
			int decOrder = 1;
			for (int j = 0 ; j < m - 1 ; j++) {
				if (mat[i][j] >= mat[i][j + 1]) {
					incOrder = 0;
				}
				if (mat[i][j] <= mat[i][j + 1]) {
					decOrder = 0;
				}
			}
			if (incOrder == 1 || decOrder == 1) {
				cnt++;
			}
		}
		return cnt;
	}
};
