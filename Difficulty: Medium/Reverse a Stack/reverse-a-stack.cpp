class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        stack<int> ans;
        while(!st.empty()) {
            ans.push(st.top());
            st.pop();
        }
        if(st.empty()) {
            st = ans;
        }
    }
};