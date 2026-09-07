class Solution {
  public:
  
    int fact(int n) {
            if(n == 0) {
                return 1;
            }
            return n * fact(n - 1);
        }  
    int factorial(int n) {
        // code here
        // int fact = 1;
        // for(int i = 2 ; i <= n ; i++) {
        //     fact *= i;
        // }
        
        // return fact;
        
        return fact(n);
        
    }
};