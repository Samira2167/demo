#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    char S[N + 1];  
    scanf("%s", S);
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (S[i] > S[j]) {
                char x = S[i];
                S[i] = S[j];
                S[j] = x;
            }
        }
    }
    printf("%s\n", S);
    return 0;
}