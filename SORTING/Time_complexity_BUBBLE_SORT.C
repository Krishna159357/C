/*STANDARD WAY FOR BUBBLE SORTING IN context of time */

#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        bool flag =true; // true refers ek baar bhi swapping nhi hua
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
                flag =false; //false refers swapping hua hai
            }
        }
        if(flag==true){
            break;
        }   
    }

    printf("\n");
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

/*Best case i.e in descending order for this code*/
/*best case me bhi ek baar loop chlga hi*/
//loop chlga agr true aaya to iska matlab ek baar bhi swapping nhi hua
// Then break laga denge kyuki array is already sorted and print kar denge
// if flase aayga then swapping hua hai then phir loop chlga
// process continues till the entire array is sorted