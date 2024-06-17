//firstAndLastPosition
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first_occur=-1, final_occur=-1;
    for(int i=0; i<n; i++) {
        if(arr[i] == k && first_occur == -1) {
            first_occur = i;
            break;
        } 
    }

    for(int i=n-1; i>=0; i--) {
        if(arr[i] == k && final_occur == -1) {
            final_occur = i;
            break;
        }    
    }

    pair<int,int> res;
    res.first = first_occur;
    res.second = final_occur;
    return res;
}
