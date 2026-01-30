 #include<stdio.h>
 int main(){
    int a,b;  //a>b
    printf("Enter value of a:");
    scanf("%d",&a);
   
    printf("Enter value of b:");
    scanf("%d",&b);
    
    int q=a/b;
    printf("%d\n",q);
    
    int r=a-b*q;
    printf("The remainder is %d",r);
    return 0;

 }

 //remainder when divided by particular no.
 #include<stdio.h>
 int main(){
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    float r;
    r=n%2;
    printf("remainder is %f",r);
    return 0;
 }