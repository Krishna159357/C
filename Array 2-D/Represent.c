#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};//step by step
    //int arr[3][3]={1,2,3,4,5,6,7,8,9};  also correct
    //int arr[3][]={1,2,3,4,5,6,7,8,9}; Also correct 
                         //  automatic Value fill kr lega 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");//har row ke baad line change hoga
    }
    return 0;
}