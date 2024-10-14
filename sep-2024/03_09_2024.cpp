int closestNumber(int N , int M) {   
        int lower = (N / M) * M;     
        int upper = lower + M;       

        // Check which of lower or upper is closer to N
        if (abs(N - lower) < abs(N - upper)) {
            return lower;  
        } else if (abs(N - lower) > abs(N - upper)) {
            return upper;  
        } else {
            return (abs(lower) > abs(upper)) ? lower : upper;
        }   
    }
