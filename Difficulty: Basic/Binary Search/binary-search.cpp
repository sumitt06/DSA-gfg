class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        while(low<=high) {
            int mid = (low + high)/2;
            if(k == arr[mid]) {
                return true;
            }
            else if(k < arr[mid]) {
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }
};