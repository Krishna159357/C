/*Continue series*/

#include<stdio.h>
int main(){
    int n,s;
    printf("Enter value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]+1!=arr[i+1]){
            s=arr[i]+1;
             printf("The missing no. is %d",s);
           break;
          }
        }
    return 0;
}
/*Random array*/
// #include<stdio.h>
// int main(){
//     int n,x,s=0;
//     printf("Enter no. of elements:");
//     scanf("%d",&n);
//     printf("Enter no. to find:");
//     scanf("%d",&x);
//     double arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%lf",&arr[i]);
//     }
//     for(int i=0;i<=n-1;i++){
//         if(arr[i]==x){
//             s=1;
//            break;
//         }
//     }
//         if(s==1){
//            printf("The No.%d is present in array",x);

//         }
//         else  
//         printf("The No. %d is not present in array",x);
     

//     return 0;
// }