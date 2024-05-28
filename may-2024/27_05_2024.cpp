//printDivisors
using namespace std;
int* printDivisors(int n, int &size){
// Write your code here
    std::vector<int> res;
    res.push_back(1);
    for(int i=2; i<=(n/2); i++) {
        if(n%i == 0) {
            res.push_back(i);
        }
    }

    res.push_back(n);
    size = res.size();

    int* result_arr = new int[size];
    for(int i=0; i<size; i++) {
        result_arr[i] = res[i];
    }

    return result_arr;
}
