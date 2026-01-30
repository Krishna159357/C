//Print marks of student having marks less than 35
// print their roll no. equals to index of the array.
#include<stdio.h>
int main(){
    int n;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
    if(arr[i]<35){
        printf(" Roll no. %d \n",i);
    }
}
    return 0;
}