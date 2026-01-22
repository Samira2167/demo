#include <stdio.h>

int main(){
    char X;
    scanf("%c",&X);
    if (X >= 'A' && X <='Z'){
        printf("%c",X+32);
    }else{
        printf("%c",X-32);
    }
    return 0;
}