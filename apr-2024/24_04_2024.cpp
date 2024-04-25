//rotateArray
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.

    vector<int> res;
    for(int i=k; i<arr.size(); i++) {
        res.push_back(arr[i]);
    }

    for(int i=0; i<k;i++) {
        res.push_back(arr[i]);
    }

    return res;
}
