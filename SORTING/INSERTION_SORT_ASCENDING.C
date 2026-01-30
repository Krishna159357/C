#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){ 
        int j=i;
        while(arr[j]>arr[j+1] && j>=0){
            
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--; // LEFT WALA ELEMENTS KO SORT KRNE KA CONDITION
        }
    }

    printf("\n");
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

//if array have have "n" elements thn total no. of pass is n-1
// APNE AAP KO CHECK KRTA HAI USKE BAAD APNE SE PREVIOUS WALO KO BHI CHECK KRTA HAI AND SWAP KRTA
/*Take an example of 5 4 3 2 1  */

/* 1 PASS  */
// [5]  [4]  3  2  1 --> 4  5  3  2  1

/* 2 PASS  */
// 4   [5]  [3]  2  1 --> [4]  [3]  5  2  1 --> 3  4  5  2  1

/* 3 PASS  */
// 3  4  [5]  [2]  1 --> 3  [4]  [2]  5  1 --> [3]  [2]  4  5  1 --> 2  3  4  5  1

/* 4 PASS  */
// 2  3  4  [5]  [1] --> 2  3  [4]  [1]  5 --> 2  [3]  [1]  4  5 --> [2]  [1]  3  4  5 --> 1 2 3 4 5