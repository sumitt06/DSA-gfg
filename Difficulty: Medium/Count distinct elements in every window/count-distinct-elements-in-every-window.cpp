class Solution {
	public:
	vector<int> countDistinct(vector<int> &arr, int k) {
		// code here
		int i = 0;
		unordered_map<int, int> mpp;
		vector<int> ans;
		for (int j = 0; j < arr.size(); j++) {
			mpp[arr[j]]++;
			
			if (j - i + 1 > k) {
				mpp[arr[i]]--;
				if (mpp[arr[i]] == 0)
					mpp.erase(arr[i]);
				i++;
			}
			if (j - i + 1 == k) {
				ans.push_back(mpp.size());
			}
			
		}
		return ans;
	}
};
