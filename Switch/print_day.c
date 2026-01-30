#include<stdio.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    switch(n){
        case 1:
        printf("MONDAY");
        break; 
        case 2:
        printf("TUESDAY");
        break; 
        case 3:
        printf("WEDNESDAY");
        break; 
        case 4:
        printf("THURSDAY");
        break;  
        case 5:
        printf("FRIDAY");
        break; 
        case 6:
        printf("SATURDAY");
        break; 
        case 7:
        printf("SUNDAY");
        break; 
        default:
        printf("INVALID NUMBER");
    }
    return 0;
}

//BREAK STATEMENT is necessary wrna uske baad ka sara print kar dega
// like gar break nahi lagate and n ka value 1 dete 
/*to dekha ki 1 hai case verify ho gya then uske baad ka sab print kar dega*/