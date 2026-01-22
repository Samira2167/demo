#include <stdio.h>
void solve (int i){
    if (i < 1) return;
    printf("%d",i);
    if (i > 1) printf(" ");
    solve(i-1);
}

int main(){
    int N;
    scanf("%d",&N);
    solve(N);
    return 0;
}