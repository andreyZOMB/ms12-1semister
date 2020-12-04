#include <stdio.h>
#include <math.h>
void main() {
    int m=4,n=5,kmax=0,o=0,repmax[m],pos[4]={0,1,2,3};
    int a[m][n],knum[n],kkol[n],rez[m][n],sum=0,otr=0;
    float sr;
    for (int i=0;i<n;i++){
        knum[i]=kkol[i]=0;
    }
    for (int i=0;i<m;i++){
        printf("Введите строку №%d\n",i+1);
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }    
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            for (int k=0;k>-1;k++){
                if (k==kmax){knum[kmax]=a[i][j];kmax++;break;}
                if (a[i][j]==knum[k]){kkol[k]++;break;} 
            }   
        }
        repmax[i]=kkol[0];
        for (int k=1;k<kmax;k++){
            if (kkol[k]>repmax[i]) repmax[i]=kkol[k];    
        }
        for (int k=0;k<kmax;k++){
            kkol[k]=knum[k]=0;
        }
        kmax=0; 
    }
    for (int i=0;i<m-1;i++){
        for (int j=0;j<m-i-1;j++){
            if (repmax[j]>repmax[j+1]){
                o=repmax[j];
                repmax[j]=repmax[j+1];
                repmax[j+1]=o;
                o=pos[j];
                pos[j]=pos[j+1];
                pos[j+1]=o;
            }
        }
    }
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            rez[i][j]=a[pos[i]][j];
        }
    }
    /////////////////////////////////////////////отрицательные элементы
    for (int j=0;j<n;j++){
        for (int i=0;i<m;i++){
            if (a[i][j]<0) otr++;
        }
        if (otr==0) {printf("столбец %d --первый не содержит отрицательные элементы\n",j+1);break;}
        otr=0;
    }
                
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d ",rez[i][j]);
        }
    printf("\n");
    }    
}