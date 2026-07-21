class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int i = 0;
        int j = 0;
        int maxi = -1;
        unordered_map<char , int> mpp;
        while (j < s.size()) {
            mpp[s[j]]++;
            if (mpp.size() > k) {
                while (mpp.size() > k) {
                    mpp[s[i]]--;
                    if(mpp[s[i]] == 0) {
                        mpp.erase(s[i]);
                    }
                    i++;
                }
            }
            if(mpp.size() == k) {
                maxi = max(maxi , j - i + 1);
            }
            j++;
        }
        return maxi;
    }
};