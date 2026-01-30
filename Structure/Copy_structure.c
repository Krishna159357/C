#include<stdio.h>
int main(){
    typedef struct car{
          float engine;
          int model;
    }KK;

    KK Maruti,Tata;
    Maruti.engine=1.2;
    Maruti.model=2025;

    Tata=Maruti;//All attributs of Maruti matches to Tata

    /*If we change some attribute in Tata it will not change in maruti*/
    Tata.model=2024;
    printf("Maruti engine:%.2f\n",Maruti.engine);
    printf("Maruti model:%d\n",Maruti.model);
    printf("Tata engine:%.2f\n",Tata.engine);
    printf("Tata model:%d\n",Tata.model);
    return 0;
}

