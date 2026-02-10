#include<stdio.h>
int main(){
    FILE *ptr;
    char ch;
    ptr=fopen("kk.txt","r");
    while(1){
        ch=fgetc(ptr);
        if(ch==EOF){//End of file=EOF
            break;
        }
        else 
        printf("%c",ch);
    }
    fclose(ptr);

    return 0;
}

/*while(1) keeps reading file continously from file*/
/*while(1) creates infinite loop*/