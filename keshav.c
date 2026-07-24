#include<stdio.h>

int main(){
    int arr[15],n,pos;
    printf("Emter the numbers: ");
    scanf("%d",&n);
    
    printf("Enter the elements: \n");
    for(int i = 0 ;i < n ;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\nEnter the position of delection(1 to %d): ",n);
    scanf("%d",&pos);

    if(pos < 1 || pos > n)
    {
        printf("Invalide choice");
        return 0;
    }
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}
