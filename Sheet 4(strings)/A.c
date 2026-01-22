#include <stdio.h>
#include <string.h>
int main(){
    char S[10005], T[10005];
    scanf("%s %s", S, T);
    printf("%d %d\n", (int)strlen(S), (int)strlen(T));
    printf("%s %s\n", S, T);
    return 0;
}