#include <stdio.h>
void solve ( int i, int n, int a[]){
    if (i == n) return;
    solve (i+1, n , a);
    if (i %  2 == 0){
        printf("%d ",a[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n ;i++){
        scanf("%d",&a[i]);
    }
    solve (0, n, a);
    return 0;
}