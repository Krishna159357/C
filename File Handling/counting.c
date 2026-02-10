/*COUNTING TABS,CHARACTERS,SPACES.... IN FILE*/
#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("kk.txt","r");
    char ch;
    int noc=0,not=0,nol=0,nob=0;
    while(1){
        ch=fgetc(ptr);
        if(ch==EOF){
            break;
        }
        else
        noc++;

        if(ch==' '){
            nob++;
        }

        if(ch=='\n'){
            nol++;
        }

        if(ch=='\t'){
            not++;
        }
    }

    printf("no. of characters=%d\n",noc);
    printf("no. of blanks=%d\n",nob);
    printf("no. of lines=%d\n",nol);
    printf("no. of tabs=%d\n",not);
    return 0;
}
