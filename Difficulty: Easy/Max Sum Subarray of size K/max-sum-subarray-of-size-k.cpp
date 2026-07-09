class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int i = 0 ; 
        int j = 0 ;
        int sum = 0 ;
        int maxi = INT_MIN ;
        
        while(j < arr.size()) {
            sum += arr[j];
          if(j - i + 1 < k) {
              j++;
          }
          else if(j - i + 1 == k){
              maxi = max(sum , maxi);
              sum -= arr[i];
              i++;
              j++;
          }
        }
        return maxi;
    }
};