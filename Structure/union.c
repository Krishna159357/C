/*UNION= WE CAN INITIALIZE ONLY ONE ATTRIBUTE AT A TIME*/
//struct=union;
// last attribute prints only for these question only name of pokemon prints
/* either we jumbled the print statement*/
// rest of all prints garbage type value
#include<stdio.h>
#include<string.h>
typedef union pokemon{
    int hp;
    int speed;
    char tier;
    char name[15];//last attribute
}poke;
int main(){

    poke pika;
    pika.hp=80;
    pika.speed=100;
    pika.tier='A';
    strcpy(pika.name,"pikachu");

    printf("hp:%d\n",pika.hp);
    printf("speed:%d\n",pika.speed);
    printf("tier:%c\n",pika.tier);
    printf("name:%s\n",pika.name);
    
    return 0;
}