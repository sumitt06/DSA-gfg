class Solution {
  public:
    // Function to remove all occurrences of the character from the string
    void solve(string &s, int i , char c , string &ans) {
        if(i == s.size()) {
            return;
        }
        if(s[i] != c) {
            ans += s[i];
        }
        solve(s , i + 1 , c , ans);
    }
    void removeCharacter(string &s, char c) {
        // code here
        string ans = "";
        solve(s , 0 , c , ans);
        s=ans;
    }
};