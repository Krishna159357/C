// #include<stdio.h>
// int main(){
//     char arr[5]={'A','E','I','O','U'};
//     printf("%c\n",arr[4]); //Character printing
//     printf("%d\n",arr[4]); // ASCII no. of character printing
//     for(int i=0;i<5;i++){
//         printf("%c  %d ",arr[i],arr[i]);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    char arr[n];
    for(int i=0;i<n;i++){
        scanf(" %c",&arr[i]); //" %c" is use to print
    }                        //"%c " print hoga but last element print nhi hoga
    for(int i=0;i<n;i++){      /*"%c "  ek space deke print hoga and last element print nhi hoga*/
        printf("%c",arr[i]);
    }
    

    return 0;
}