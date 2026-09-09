class Solution {
	public:
	bool solve(string& s, int i, int j) {
	    if (i >= j) {
			return true;
		}
		if (s[i] != s[j]) {
			return false;
		}
		
		
		return solve(s, i + 1, j - 1);
	}
	bool isPalindrome(string& s) {
		// code here
		return solve(s, 0, s.size() - 1);
	}
};
