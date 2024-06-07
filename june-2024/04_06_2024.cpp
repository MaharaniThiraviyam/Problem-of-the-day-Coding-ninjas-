//sortZeroesAndOne
void sortZeroesAndOne(int input[], int size)
{
    //Write your code here

    int zeros_count = 0;
    int ones_count = 0;

    for(int i=0; i<size; i++) {
        if(input[i] == 0) {
            zeros_count++;
        }
        else if(input[i] == 1) {
            ones_count++;
        }
    }

    for(int i=0; i<size; i++) {
        if(zeros_count > 0) {
            input[i] = 0;
            zeros_count--;
        }
        else if(ones_count > 0) {
            input[i] = 1;
            ones_count--;
        }
    }
}
