/*typedef is used to create an alternative name for datatype*/
//it is used to create "alias" a false name generally used by criminal  

// #include<stdio.h>
// typedef int K;  // global declaration applicable everywhere
// int main(){
//     K num=7;
//     printf("%d",num);
// return 0;
// }

// #include<stdio.h>
// int main(){
//     typedef struct car{
//           float engine;
//           int model;
//     }KK;
     
//     KK maruti;
//     maruti.engine=1.2;
//     maruti.model=2022;

//     KK Tata;
//     Tata.engine=3;
//     Tata.model=2024;

//     printf("maruti\n");
//     printf("%f\n",maruti.engine);
//     printf("%d\n",maruti.model);

//     printf("\n");

//     printf("Tata\n");
//     printf("%f\n",Tata.engine);
//     printf("%d\n",Tata.model);
//     return 0;
// }


/*ANOTHER WAY OF INITIALIZATION*/
#include<stdio.h>
typedef struct pokemon{
    int hp;
    int speed;
    char name[15];
    char tier;
}poke;
int main(){
    
    poke pika={80,100,"pikachu",'A'}; // organised and respectively
   /* sequence me*/
    printf("hp:%d\n",pika.hp);
    printf("speed:%d\n",pika.speed);
    printf("name:%s\n",pika.name);
    printf("tier:%c\n",pika.tier);
    printf("\n");
    return 0;
}