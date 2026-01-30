/*call by refrence*/

// functions single output deta hai
//pointers multiple output ke liye use hota hai\\

#include<stdio.h>
void swap(int *a,int *b){  //void is use agr return kuch nhi chahiye
    int s;
    s=*a;
    *a=*b;
    *b=s;
    printf("The value of a is %d\n",*a);
     printf("The value of b is %d\n",*b);

    return;

}  
int main(){
     int a,b;
     printf("Enter the value of a:");
     scanf("%d",&a);
     printf("Enter the value of b:");
     scanf("%d",&b);
     swap(&a,&b);
    //  printf("The value of a is %d\n",a);
    //  printf("The value of b is %d\n",b);

    return 0;
}