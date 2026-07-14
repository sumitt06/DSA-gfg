class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int left = 0 , right = 0 ;
        int n = arr.size();
        int minLen = INT_MAX;
        long long sum = 0;
        while(right < n) {
            sum += arr[right];

            while(sum > x) {
                minLen = min(minLen , right - left + 1);
                sum -= arr[left];
                left++;    
            }
            right++;
        }
        if(minLen == INT_MAX){
            return 0;
        }
        return minLen;
    }
};