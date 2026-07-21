class Solution {
	public:
	int findSubString(string& str) {
		// code here
		unordered_set<char> st;
		for (int i = 0; i < str.size(); i++) {
			st.insert(str[i]);
		}
		unordered_map<char , int> mpp;
		int i = 0 ; 
		int j = 0 ;
		int len = str.size();
		while(j < str.size()) {
		    mpp[str[j]]++;
		    if (mpp.size() == st.size()) {
                while (mpp.size() == st.size()) {
                    len = min(len , j - i + 1);
                    mpp[str[i]]--;
                    if(mpp[str[i]] == 0) {
                        mpp.erase(str[i]);
                    }
                    i++;
                }
            }
            j++;
		}
		return len;
	}
};
