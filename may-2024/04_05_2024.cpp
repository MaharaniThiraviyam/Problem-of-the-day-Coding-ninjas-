//min_rotation_to_same_string
int min_rotation_to_same_string(const string& s) {
    int n = s.size();
    string doubled_s = s + s;
    
    for (int i = 1; i <= n; ++i) {
      
        if (doubled_s.substr(i, n) == s) {
            return i;
        }
    }

    return n;
}
