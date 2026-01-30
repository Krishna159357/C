/*PASS BY VALUE*/

#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    int hp;
    int speed;
    char name[15];
}poke;

void fun(poke p){
    printf("%d\n",p.hp);
    printf("%s",p.name);
    return;
}

int main(){
    poke pikachu;

    pikachu.hp=50;
    pikachu.speed=100;
    strcpy(pikachu.name,"pikachu");

    fun(pikachu);
    
   return 0;
}