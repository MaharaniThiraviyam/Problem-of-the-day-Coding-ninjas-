//getFloorAndCeil
pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
    // Write your code here.
    int ceil = -1;
    int floor = -1;    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            ceil = x;
            floor = x;
            break;
        }
        else if(arr[i]>x && (floor == -1 || arr[i]<floor)) {
            floor = arr[i];
        }
        else if(arr[i]<x && arr[i]>ceil) {
            ceil = arr[i];
        }    }
    make_pair(ceil, floor);
}
