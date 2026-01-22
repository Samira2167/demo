#include <stdio.h>
double findAverage(){
    int N;
    scanf("%d",&N);
    double sum = 0.0 , x;
    for (int i = 0; i<N; i++){
        scanf("%lf",&x);
        sum +=x;
    }
    return sum / N;
}
int main(){
    double avg = findAverage();
    printf("%.7lf\n",avg);
    return 0;
}
