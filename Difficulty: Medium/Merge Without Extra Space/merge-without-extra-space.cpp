class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int m = a.size();
        int n = b.size();
        int len = m + n;
        int gap = (len / 2) + (len % 2);
        while (gap > 0) {
            int left = 0;
            int right = left + gap;
            while (right < len) {
                // left in a, right in b
                if (left < m && right >= m) {
                    if (a[left] > b[right - m]) {
                        swap(a[left], b[right - m]);
                    }
                }
                // both in nums2
                else if (left >= m) {
                    if (b[left - m] > b[right - m]) {
                        swap(b[left - m], b[right - m]);
                    }
                }
                // both in nums1
                else {
                    if (a[left] > a[right]) {
                        swap(a[left], a[right]);
                    }
                }
                left++;
                right++;
            }
            if (gap == 1)
                gap = 0;
            else
                gap = (gap / 2) + (gap % 2);
        }
    }
};