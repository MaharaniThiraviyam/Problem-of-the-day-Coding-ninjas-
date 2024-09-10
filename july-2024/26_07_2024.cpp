  int nthFibonacci(int n){
        // code here
        if (n == 1 || n == 2) {
            return 1;
        }
        
        vector<int> fib(n + 1);
        fib[1] = 1;
        fib[2] = 1;
        
        for (int i = 3; i <= n; ++i) {
             fib[i] = (fib[i - 1] + fib[i - 2]) % 1000000007;
        }
        
        return fib[n];
         
    }
