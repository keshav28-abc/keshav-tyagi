//C Program to multiplication two matrix;
#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3],i,j,l;
    printf("Enter the elements of first matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of secound matrix: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++){

        for(j=0;j<3;j++){
            c[i][j]=0;
            for(l=0;l<3;l++){
                c[i][j]+=a[i][l]*b[l][i];
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");   
    }


    return 0;
}