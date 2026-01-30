#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon   /*Structure is used to store diff. datatypes */
    {
        int hp;/* data */
        int attack;
        int speed;    //  structre have multiple attributes
        char tier;
        char name[15];
    };
    struct pokemon pikachu;   /*. ko dot operator bolte hai*/
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
  // gets(pikachu.name);           //if aking from user
    strcpy(pikachu.name,"pika"); /*string copy function*/
     /*name se ek string present hai already and pikachu.name se
     new string ban gya dono different hai isiliye copy kiye*/

    struct pokemon mewto;
    mewto.attack=170;
    mewto.hp=150;
    mewto.speed=200;
    printf("Enter mewto tier:");
    //scanf("%c",&mewto.tier);

printf("%d\n",mewto.attack);
printf("%c\n",pikachu.tier);
/*either*/
printf("%s\n",pikachu.name);
/*or*/
//puts(pikachu.name);
 return 0;
}


