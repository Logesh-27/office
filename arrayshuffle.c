#include<stdio.h>
void main(){
    int a[6]={1,2,3,4,5,6};
    int n=3;
    int res[6];
    int j=0;
    for(int i=0;i<n;i++){
        res[j]=a[i];
        j++;
        res[j]=a[n+i];
        j++;
    }
    for(int k=0;k<n*2;k++){
        printf("%d",res[k]);
    }
}