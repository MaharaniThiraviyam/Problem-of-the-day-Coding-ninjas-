//mergeKSortedArrays
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    vector<int> result;
    for (auto& arr : kArrays) {
        result.insert(result.end(), arr.begin(), arr.end());
        }
    sort(result.begin(), result.end());
    return result;
}
