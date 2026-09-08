class Solution {
  public:
  
  int check(vector<int>& arr , int i , int x) {
        if(arr.size() == i) {
            return -1;
        }
        if(arr[i] == x) {
            return i;
        }
        return check(arr , i+1 , x);
    }
    int search(vector<int>& arr, int x) {
        // code here
        return check(arr , 0 , x);
    }
};