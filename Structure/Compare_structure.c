#include<stdio.h>
typedef struct Date{
    int date;
    int month;
    int year;
}Date;
 int main(){ 
Date arr[2];

for(int i=0;i<2;i++){
    scanf("%d",&arr[i].date);
    scanf("%d",&arr[i].month);
    scanf("%d",&arr[i].year);
}

printf("\n");

for(int i=0;i<2;i++){
    printf("%d\n",arr[i].date);
    printf("%d\n",arr[i].month);
    printf("%d\n",arr[i].year);

    printf("\n");
}
int a=0;
if(arr[0].date!=arr[1].date){
     a=1;
}
if(arr[0].month!=arr[1].month){
     a=1;
}
if(arr[0].year!=arr[1].year){
     a=1;
}
if(a==0){
    printf("Dates are same");
}
else printf("Dates are different");

}