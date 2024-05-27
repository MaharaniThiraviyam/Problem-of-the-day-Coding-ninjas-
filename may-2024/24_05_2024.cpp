//Convert a list of characters into a String

class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        //code here
        string res;
        for(int i=0; i<n; i++) {
            res.push_back(arr[i]);
        }
        return res;
    }
};
