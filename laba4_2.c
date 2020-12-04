#include <stdio.h>
#include <math.h>
void main() {
    int a[10],rez=0,sum=0;
    float sr;
    for (int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<10;i++){
        sum=a[i]+sum;
    }
    sr=sum/10;
    for (int i=0;i<10;i++){
        if (a[i]>sr) rez++;
    }
    printf("%d ",rez);
}