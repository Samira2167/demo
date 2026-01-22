#include <stdio.h>

int FindSum(){
    int X, Y;
    scanf("%d %d",&X,&Y);
    int sum = X + Y;
    return sum;
}
int main(){
    int p = FindSum();
    printf("%d",p);
}