/*consider an array having element from 1 to 9 find sum of 2 element*/
// summation of 2 no. must be smallest among all 

#include<stdio.h>
#include<limits.h>
int main(){
    int n,s;
    printf("Enter n:");
    scanf("%d",&n);
    int m=n*(n+1)/2;// total summation possible
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int k=0;
     int brr[m-n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           
             brr[k]=arr[i]+arr[j]; // put summation element in brr[k]
             k++;//Another way to initialise array if you know 
        }        // size of an array
    }
   
    int l;
    s=INT_MAX;
    for(int i=0;i<k;i++){
        if(s>brr[i]){
        s=brr[i];
        l=brr[i];
        }
    }

    printf("%d",s);
    return 0;
}