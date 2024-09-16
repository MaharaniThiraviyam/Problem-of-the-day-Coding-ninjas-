//factorial
long long int factorial(int N){
        //code here
        if(N == 1) {
            return 1;
        }
        else if(N == 2) {
            return 2;
        }
        else {
             int result = 1;
             for(int i=2; i<=N; i++) {
                result *= i;
             }
            return result;
        }
    }
