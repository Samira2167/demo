#include <stdio.h>
void solve(int i, int n){
    if (i <= n){ 
    printf("%d\n",i);
    solve(i+1,n);
    }
}

int main(){
    int N;
    scanf("%d",&N);
    solve(1, N);
    return 0;
}