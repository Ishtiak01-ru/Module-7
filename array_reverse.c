#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=n-1;i>=0;i--){   //i=0 means ar[0]= 2 ; i=1 ar[1]=5.....when we do reverse,starting i=n-1 ,index 5-1=4; 4 position value is 1 ,i-- decresing  
        printf("%d ",ar[i]);
    }
    return 0;
}