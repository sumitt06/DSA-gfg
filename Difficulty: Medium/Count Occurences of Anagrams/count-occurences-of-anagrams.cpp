class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        map<char , int> mpp;
        for(int i = 0 ; i < pat.size() ; i++) {
            mpp[pat[i]]++;
        }
        int i = 0 , j = 0 , ans = 0 , k = pat.size() , cnt = mpp.size();
        while(j < txt.size()) {
            if(mpp.find(txt[j]) != mpp.end()) {
                mpp[txt[j]]--;
                if(mpp[txt[j]] == 0) {
                    cnt--;
                }
            }
            if(cnt == 0) {
                ans++;
            }
            if(j - i + 1 < k) {
              j++;
            }
            else if (j - i + 1 == k) {
                if(mpp.find(txt[i]) != mpp.end()) {
                    if(mpp[txt[i]] == 0) {
                        cnt++;
                    }
                    mpp[txt[i]]++;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};