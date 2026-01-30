#include<stdio.h>
int main(){
    float CP,SP;
    printf("Enter cost price:");
    scanf("%f",&CP);
    printf("Enter selling price:");
    scanf("%f",&SP);
    if(CP>SP){
        printf("Item sell in loss of %f",CP-SP);

    }
    else
    printf("Item sell in profit of %f",SP-CP);

    
    return 0;
}
