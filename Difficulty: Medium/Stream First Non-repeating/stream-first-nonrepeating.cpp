class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        queue<char> q;
        string ans = "";
        map<char , int> mpp;
        for(auto it : s) {
            mpp[it]++;
            q.push(it);
            
            while(!q.empty() && mpp[q.front()] > 1) {
                q.pop();
            }
            if(!q.empty()) {
                ans += q.front();
            }
            else{
                ans += '#';
            }
        }
        return ans;
    }
};