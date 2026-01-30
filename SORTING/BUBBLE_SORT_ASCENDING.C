/*IN BUBBLR SORT WE SORT ELEMENTS OF ARRAY BY ALTERNATE ELEMENT SWAPPING*/
/* STEP BY STEP PASSING*/

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
        for(int j=0;j<n-1-i;j++){ // after every sorting 
            if(arr[j]>arr[j+1]){  // last element will maximum.
               int temp=arr[j]; // isiliye j<n-1-i kiye kyuki
               arr[j]=arr[j+1]; //  last element already sorted i.e maximum 
               arr[j+1]=temp;
            }
        }
    }

    printf("\n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

//TAKE EXAMPLE 5,4,3,2,1 WE HAVE TO SORT IN ASCENDING ORDER
      /*   1 PASS   */              /*   2 PASS    */          
//   [5] [4]  3   2   1            [4] [3]  2   1   5
//    4  [5] [3]  2   1             3  [4] [2]  1   5
//    4   3  [5] [2]  1             3   2  [4] [1]  5
//    4   3   2  [5] [1]            3   2   1   4   5
//    4   3   2   1   5

      /*   3 PASS   */              /*   4 PASS   */ 
//   [3] [2]  1   4   5            [2]  [1] 3   4   5
//    2  [3] [1]  4   5             1   2   3   4   5
//    2   1   3   4   5

/*bubble sort peeche se sort krna start krta hai*/
/*AFTER every pass we have to apply bubble sort for unsorted elements*/
//Max. number of swaps to sort an array having "n" elements is
/* 1+2+3+.......n-1*/