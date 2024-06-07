//totalSalary
#include <bits/stdc++.h> 
int totalSalary(int basic, char grade) 
{
    // Write your code here.
    int allowance = 0;
    if(grade == 'A') {
        allowance = 1700;
    }
    else if(grade == 'B') {
        allowance = 1500;
    }
    else {
        allowance = 1300;
    }
    int total = floor(basic + ((0.2 * basic) + (.5 * basic)) + allowance)-(0.11 * basic);
    return (total);
}
