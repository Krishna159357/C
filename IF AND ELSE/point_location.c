#include<stdio.h>
int main(){
    int x,y;
    printf("Enter coordinates:");
    scanf("%d%d",&x,&y);
    if(x==0&&y!=0){
        printf("Lies on y axis");
    }
   else if(x!=0&&y==0){
        printf("Lies on x axis");
    }
   else if(x==0&&y==0){
        printf("Lies on origin");
    }
    else
    printf("lie on plane");

    return 0;
}