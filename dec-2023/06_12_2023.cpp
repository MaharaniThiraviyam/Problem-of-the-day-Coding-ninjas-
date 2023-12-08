//countMoves
int countMoves(int n, vector<int> a) {
    
    // Write your code here.
    int method_one_steps=0, method_two_steps =0, i;
    for(i=0; i<n; i++) {
        if(a[i]%3 != 0) {
            method_one_steps += (3 - (a[i]%3));
        }
        if (a[i] % 2 == 0) {
            method_two_steps += 1;
        }
    }

    if(method_one_steps <= method_two_steps) {
        return method_one_steps;
    }
    else {
        return method_two_steps;
    }
}
