#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    long long int A[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    
    int first = 0;
    int last = N - 1;
    
    while (first <= last) {
        if (A[first] != A[last]) {
            printf("NO");
            return 0;
        }
        first++;
        last--;
    }
    
    printf("YES");
    return 0;
}