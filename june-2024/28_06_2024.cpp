//read books
#include<unordered_set>
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    unordered_set<int> book_pages;
    for (int i = 0; i < n; i++) {
        int needed_pages = target - book[i];
        if (book_pages.find(needed_pages) != book_pages.end()) {
          return "YES";
        }
        book_pages.insert(book[i]);
    }
    return "NO";
}
