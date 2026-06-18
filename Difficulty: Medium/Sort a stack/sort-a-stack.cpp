class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        stack<int> ans;
        while(!st.empty()) {
            int curr = st.top();
            st.pop();
            
            while(!ans.empty() && curr < ans.top()) {
                st.push(ans.top());
                ans.pop();
            }
            ans.push(curr);
        }
        st = ans;
    }
};
