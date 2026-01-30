#include<stdio.h>
int main(){
    float L,B;
    printf("Enter length:");
    scanf("%f",&L);
    printf("Enter Breadth:");
    scanf("%f",&B);

    float Area=L*B;
    float Perimeter=2*(L+B);

    if(Area>Perimeter){
        printf("Area of rectangle is greater than its perimeter");

    }
    else
    printf("Area of rectangle is less than its perimeter");
        
    return 0;
}