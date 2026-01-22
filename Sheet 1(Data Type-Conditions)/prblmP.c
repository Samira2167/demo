#include <stdio.h>

int main(){
    int X;
    scanf("%d",&X);
    int n = X/1000;
    if(n % 2 == 0){printf("EVEN");}
    else{printf("ODD");}
    return 0;
}