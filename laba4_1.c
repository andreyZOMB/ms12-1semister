#include <stdio.h>
#include <math.h>
void main() {
    int a[10],min,max,o,mini=0,maxi=0;
    scanf("%d",&a[0]);
    max=min=a[0];
    for (int i=1;i<10;i++){
        scanf("%d",&a[i]);
        if (min>a[i]) {min=a[i];mini=i;}
        if (max<a[i]) {max=a[i];maxi=i;}
    }
    o=a[mini];
    a[mini]=a[maxi];
    a[maxi]=o;
    for (int i=0;i<10;i++){
    printf("%d ",a[i]);
    }
}