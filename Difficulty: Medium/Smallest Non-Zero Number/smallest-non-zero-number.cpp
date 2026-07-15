class Solution {
	public:
	int find(vector<int>& arr) {
		// code here
		//     //time limit exceed
		// int x = 0 ;
		// int i = 0 ;
		// int curr = x;
		// while(i < arr.size()) {
		//     if(curr > arr[i]) {
		//         int val = curr - arr[i];
		//         curr += val;
		//         i++;
		//     }
		//     else {
		//         int val1 = arr[i] - curr;
		//         curr -= val1;
		//         i++;
		//     }
		//     if(curr < 0) {
		//         x++;
		//         i = 0;
		//         curr = x;
		//     }
		// }
		// return x;
		
		long long low = 0 ;
		long long high = 0;
		long long ans = high, n = arr.size();
		for (int i = 0 ; i < n ; i++) {
			high = max(high, (long long)arr[i]);
		}
		while (low <= high) {
			long long mid = low + (high - low) / 2;
			long long curr = mid ;
			int i ;
			
			for (i = 0 ; i < n ; i++) {
				if (curr > LLONG_MAX / 2) {
					curr = LLONG_MAX;
				} else {
					curr = 2 * curr - arr[i];
				}
				if (curr < 0) {
					break;
				}
			}
			if (i == n) {
				ans = mid;
				high = mid - 1 ;
			}
			else {
				low = mid + 1 ;
			}
		}
		return (int)ans;
	}
};
