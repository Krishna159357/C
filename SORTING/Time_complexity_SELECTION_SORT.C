/*STANDARD WAY FOR BUBBLE SORTING IN context of time */


#include<stdio.h>
#include<limits.h>
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
         int s=INT_MIN;
         int min_idx;
         bool flag =true; // true refers swap nhi hua hai to break laga do
        for(int j=i;j<n;j++){// atleast 1 baar loop chlga hi uske baad true false dekhnge
            if(s<arr[j]){
               s=arr[j];
               min_idx=j;
            }
        }
        int temp=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
            flag=false; // false refers swap hua hai
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