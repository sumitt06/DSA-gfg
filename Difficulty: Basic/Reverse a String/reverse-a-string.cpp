// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        int left = 0 ;
        int right = s.size()-1;
        while(left<=right) {
            int temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        return s;
    }
};
