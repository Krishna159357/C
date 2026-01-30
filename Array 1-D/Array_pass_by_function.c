#include<stdio.h>
void fun( int arr[]){
arr[0]=5;
return;
}
int main(){
    int arr[5]={1,3,5,7,9};
    fun(arr);
    printf("%d",arr[0]);
    return 0;
}
// ADDRESS OF AN ARRAY = ADDRESS OF FIRST ELEMENT OF AN ARRAY A0