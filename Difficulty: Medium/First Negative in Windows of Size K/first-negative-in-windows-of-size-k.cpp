class Solution {
	public:
	vector<int> firstNegInt(vector<int>& arr, int k) {
		// code here
		int i = 0 ;
		int j = 0 ;
		vector<int> ans;
		queue<int> q;
		while (j < arr.size()) {
			if (arr[j] < 0) {
				q.push(arr[j]);
			}
			if (j - i + 1 < k) {
				j++;
			}
			else if (j - i + 1 == k) {
			    if(q.empty()) {
			        ans.push_back(0);
			    }
			    else{
			        ans.push_back(q.front());
			    }
			    if(!q.empty() && arr[i] == q.front()) {
			        q.pop();
			    }
				i++;
				j++;
			}
		}
		return ans;
	}
};
