/*SEARCHING OF AN ELEMENT*/

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
//     int k=-1;//(For positive numbers in array)
//     for(int i=0;i<=n-1;i++){
//      if(k<arr[i]);   
//      k=arr[i];
//     }
//     printf("Maximum no. is %d",k);

//     return 0;
// }


/*Comparing itself*/
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
//     int k=arr[0];
//     for(int i=1;i<=n-1;i++){
//      if(k<arr[i]){   
//       k= arr[i];
//     }
// }
//     printf("Maximum no. is %d",k);

//     return 0;
// }

/*BEST METHOD USING SMALLEST VALUE OF COMPUTER*/
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    int k=INT_MIN;
    for(int i=0;i<=n-1;i++){
     if(k<arr[i]){   
      k= arr[i];
    }
}
    printf("Maximum no. is %d",k);

    return 0;
}

//limits.h
// #include<stdio.h>
// #include<limits.h>
// int main(){
//    int k=INT_MAX;
//    int s=INT_MIN;
//    printf("%d\n",k);
//    printf("%d",s);
//     return 0;
// }