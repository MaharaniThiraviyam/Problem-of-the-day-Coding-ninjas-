//averageMarks
pair<char, int> averageMarks(char firstLetterOfName, int m1, int m2, int m3) {
    // Write your code here.
    pair<char, int> student;
    student.first = firstLetterOfName;
    student.second = floor((m1+m2+m3)/3);
    return student;
}
