//sort012
void sort012(int a[], int n)
    {
        // code here 
        int num_ones = 0;
        int num_twos = 0;
        int num_zeros = 0;
        for(int i=0; i<n; i++) {
            if(a[i] == 0) {
                num_zeros++;
            }
            else if(a[i] == 1) {
                num_ones++;
            }
            else if(a[i] == 2) {
                num_twos++;   
            }
        }
        
        for(int i=0; i<n; i++) {
            
            if(num_zeros > 0) {
                a[i] = 0;
                num_zeros--;
            }
            else if(num_ones > 0) {
                a[i] = 1;
                num_ones--;
            }
            else if(num_twos > 0) {
                a[i] = 2;
                num_twos--;
            }
        }
    }
