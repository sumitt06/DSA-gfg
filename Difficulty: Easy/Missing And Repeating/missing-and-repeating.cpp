class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int hash[n+1] = {0};
        for(int i = 0 ; i < n ; i++) {
            hash[arr[i]]++;
        }
        int repeat = -1 , missing = -1;
        for(int i = 1 ; i <= n ; i++) {
            if(hash[i] == 2) {
                repeat = i;
            }
            else if(hash[i] == 0) {
                missing = i;
            }
            
            if(repeat != -1 && missing != -1) {
                break;
            } 
        }
        return {repeat,missing};
    }
};