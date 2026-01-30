#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){ 
         int s=INT_MAX;
         int min_idx;
        for(int j=i;j<n;j++){//j<n refers last element tak check krga
            if(s>arr[j]){
               s=arr[j];
               min_idx=j;
            }
        }
        int temp=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=temp;
    }

    printf("\n");
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

//FIRSTLY WE HAVE TO FIND SMALLEST ELEMENET AND THEIR INDEX NO.
// SWAP THAT NO. WITH FIRST INDEX NO. I.E arr[0]
//AFTER EVERY LOOP ONE ELEMENT SOERTED ISILIYE J KO i SE START KRTE HAI
//SELECTION SORT AAGE SE SORT KRNA START KRTE HAI
//TAKE EXAMPLE OF 7,4,5,9,8,2,1 TOSORT IN ASCENDING ORDER

/* 1 PASS*/
// SMALLEST NO. IS 1 AND INDEX IS 6 AND REPLACE BY INDEX 0
//[7] 4 5 9 8 2 [1] --> 1 (4 5 9 8 2 7) FIRST ELEMENT IS SORTED

// NOW WE HAVE TO SORT FROM SECOND ELEMENT TO LAST
/* 2 PASS*/
// SECOND SMALLEST NO. IS 2 AND INDEX IS 5 AND REPLACED BY INDEX 1
// 1 [4] 5 9 8 [2] 7 --> 1 2 (5 9 8 4 7)

/* 3 PASS*/
// 1 2 [5] 9 8 [4] 7 --> 1 2 4 (9 8 5 7)

/*4 PASS*/
// 1 2 4 [9] 8 [5] 7 --> 1 2 4 5 (8 9 7)

/*5 PASS*/
// 1 2 4 5 [8] 9 [7] --> 1 2 4 5 7 (9 8)

/*6 PASS*/
// 1 2 4 5 7 [9] [8] --> 1 2 4 5 7 8 9

/* MAXIMUM NO OF PASS IN SELECTION SORT OF N ELEMENTS IS "N-1"*/
