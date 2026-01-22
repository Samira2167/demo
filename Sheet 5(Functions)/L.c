#include <stdio.h>

int newArray(){
    int N;
    scanf("%d",&N);
    int A[N],B[N];
    for (int i = 0; i<N; i++){
        scanf("%d",&A[i]);
    }
    for(int i = 0; i < N; i++){
        scanf("%d",&B[i]);
    }
    for(int i = 0; i < N; i++){
        printf("%d ",B[i]);
    }
    for(int i = 0; i < N; i++){
        printf("%d ",A[i]);
    }
    return 0;
}
int main(){
    newArray();
}