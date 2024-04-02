//stringMania
#include <bits/stdc++.h> 
int stringMania(int N, int M, string STR1, string STR2) {
     int i = 0;
    while (i < N && i < M && STR1[i] == STR2[i]) {
        i++;
    }

    if (i == N && i == M) {
        return 0; // both strings are the same
    } else if (i == N) {
        return -1; // STR1 is shorter and hence worse
    } else if (i == M) {
        return 1; // STR2 is shorter and hence worse
    } else {
        return (STR1[i] > STR2[i]) ? 1 : -1;
    }
}

