#include <stdio.h>
int findMinMax(){
    int N;
    scanf("%d",&N);
    int x, min, max;
    scanf("%d",&x);
    min = max = x;
    for (int i = 1; i<N ; i++){
        scanf("%d",&x);
        if (x < min) min = x;
        if (x > max) max = x;
    }
    printf("%d %d\n", min, max);
    return 0; 
}
int main(){
    findMinMax();
    return 0;
}