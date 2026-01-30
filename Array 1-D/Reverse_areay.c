// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter no of elements:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");
//     for(int i=n-1;i>=0;i--){
//         printf("%d ",arr[i]);
     
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter no of elements:");
//     scanf("%d",&n);
//     int arr[n],brr[n];
//     for(int i=0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("\n");
//     for(int i=0;i<=n-1;i++){
//         brr[i]=arr[n-i-1];
//     }
//     for(int i=0;i<=n-1;i++){
//     printf("[%d] ",brr[i]);
//     }
//     return 0;
// }



//Without using another array with for loop
#include<stdio.h>
void reverse(int n, int arr[]){
    for(int i=0, j=n-1; i<j ;i++,j--){
    int temp =arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
    }
    return;


}

int main(){
    int n;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
     reverse(n,arr);
    for(int i=0;i<=n-1;i++){
    printf("[%d] ",arr[i]);
    }
    return 0;
}