class Solution {
  public:
  
  
  bool check(vector<int>& arr , int i) {
      if(arr.size() - 1 == i) {
          return true;
      }
      if(arr[i] > arr[i + 1]) {
          return false;
      }
      return check(arr , i+1);
  }
    bool isSorted(vector<int>& arr) {
        // int n = arr.size();
        // for(int i = 0 ; i < n-1 ; i++) {
        //     if(arr[i] > arr[i+1]) {
        //         return false;
        //     }
        // }
        // return true;
        
        return check(arr , 0);
    }
};