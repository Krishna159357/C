// #include<stdio.h>
// #include<string.h>
// typedef struct pokemon{
//     int hp;
//     int speed;
//     char name[15];
// }poke;


// int main(){
//     poke pikachu;

//     pikachu.hp=50;
//     pikachu.speed=100;
//     strcpy(pikachu.name,"pikachu");
//     poke*x = &pikachu;

//     printf("%p\n",&pikachu.hp);//aDDRESS OF FIRST ATTRIBUTE
//     printf("%p\n",&pikachu.speed);
//     printf("%p\n",&pikachu.name);
//     printf("%p\n",x);//ADDRESS OF WHOLE STRUCTURE=ADDRESS OF FIRST ATTRIBUTE
//     return 0;
// }

/*qUESTION ON PASS BY REFRENCE USING POINTERS*/

#include<stdio.h>
#include<string.h>
typedef struct  pokemon{
    int hp;
    int speed;
    char name[15];

}poke;
 void change(poke *p){
    // (*p).hp=70;    //(*p).hp/speed etc lekin bracket dena jruri h
    // (*p).speed=60;
    // strcpy((*p).name,"mewto");

    /*another way*/
    p->hp=70;
    p->speed=60;
    strcpy(p->name,"mewto");
 } 
 
int main(){
    poke pikachu;
    pikachu.hp=60;
    pikachu.speed=100;
    strcpy(pikachu.name,"pikachu");

    change(&pikachu);

    printf("hp:%d\n",pikachu.hp);
    printf("speed:%d\n",pikachu.speed);
    printf("name:%s\n",pikachu.name);

    return 0;
}