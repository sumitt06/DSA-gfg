class Solution {
  public:
  
  void solve(vector<int> &arr , int i , int j) {
      if(i >= j){
          return;
      }
      swap(arr[i] , arr[j]);
      solve(arr , i + 1 , j - 1);
  }
    void reverseArray(vector<int> &arr) {
        // code here
        return solve(arr , 0 , arr.size() - 1);
    }
};