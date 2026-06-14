class Solution {
	public:
	vector<int> findTwoElement(vector<int>& arr) {
// 		brute solution
// 		this brute solution take TC = O(n^2) thats why itz time limit has exceeded in test case 1110/1111
		
// 		int n = arr.size();
// 		int missing = -1;
// 		int repeat = -1;
// 		for (int i = 1 ; i <= n ; i++) {
// 			int cnt = 0;
// 			for (int j = 0 ; j < n ; j++) {
// 				if (arr[j] == i) {
// 					cnt++;
// 				}
// 			}
// 			if (cnt == 2) {
// 				repeat = i;
// 			}
// 			if (cnt == 0) {
// 				missing = i;
// 			}
// 			if (missing != -1 && repeat != -1) {
// 				break;
// 			}
// 		}
		
// 		return {repeat, missing};
		
// 		better solution
		
// 		int n = arr.size();
// 		int hash[n + 1] = {0};
// 		for (int i = 0 ; i < n ; i++) {
// 			hash[arr[i]]++;
// 		}
// 		int repeat = -1, missing = -1;
// 		for (int i = 1 ; i <= n ; i++) {
// 			if (hash[i] == 2) {
// 				repeat = i;
// 			}
// 			else if (hash[i] == 0) {
// 				missing = i;
// 			}
			
// 			if (repeat != -1 && missing != -1) {
// 				break;
// 			}
// 		}
// 		return {repeat, missing};


        // opimal - 1
        
        
        long long n = arr.size();
        // S - SN
        //S2 - S2N
        long long SN = (n*(n+1))/2;
        long long S2N = (n*(n+1)*(2*n+1))/6;
        long long S = 0;
        long long S2 = 0;
        for(int i = 0 ; i < n ; i++) {
            S = S + arr[i];
            S2 = S2 + ((long long)arr[i] * (long long)arr[i]);
        }
        long long val1 = S - SN;       // x - y
        long long val2 = S2 - S2N;     
        val2 = val2/val1;        // x + y
        long long x = (val1 + val2)/2;  // it is our repeating element
        long long y = x - val1;        // it is our missing element
        return {(int)x , (int)y};
	}
};
