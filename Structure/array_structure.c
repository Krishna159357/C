#include<stdio.h>
#include<string.h>
 typedef struct pokemon{
    char name[15];
    int hp;
    int speed;
    char tier;
 }kk;
int main(){
    kk arr[3];//arr[0],arr[1],arr[2].
    
    strcpy(arr[0].name,"pikachu"); // we can say pikachu=arr[0]
    arr[0].hp=50;
    arr[0].speed=80;
    arr[0].tier='A';

    strcpy(arr[1].name,"mewto"); // we can say mewto=arr[1]
    arr[1].hp=150;
    arr[1].speed=180;
    arr[1].tier='G';
    
    strcpy(arr[2].name,"charizard"); //we can say charizard=arr[2]
    arr[2].hp=100;
    arr[2].speed=80;
    arr[2].tier='S';
    
    for(int i=0;i<3;i++){
        printf(" Name:%s\n",arr[i].name);
        printf(" hp:%d\n",arr[i].hp);
        printf(" speed:%d\n",arr[i].speed);
        printf(" tier:%c\n",arr[i].tier);
        printf("\n");
    }
    
    return 0;
}


/*Taking input*/

/*Continue me agar scanf lena ho to har % se phle space dena */
/*Being a safe side wrna error de deta hai kabhi kabhi*/
/*specially in case of strings and characters ka scanf me*/
/*Generally do not show error in int or float datatypes*/


// #include<stdio.h>
// #include<string.h>
//  typedef struct pokemon{
//     char name[15];
//     int hp;
//     int speed;
//     char tier;
//  }kk;
// int main(){
//     int n;
//     printf("Enter no of pokemons:");
//     scanf("%d",&n);
//     kk arr[n];//arr[0],arr[1],arr[2].......arr[n-1]

//     for(int i=0;i<n;i++){
//         scanf(" %[^\n]s",arr[i].name);// taking gets(arr[i].name) is wrong
//         scanf("%d",&arr[i].hp);
//         scanf("%d",&arr[i].speed); 
//         scanf(" %c",&arr[i].tier);
//     }

//     printf("\n");

//     for(int i=0;i<n;i++){
//         printf("Name:%s\n",arr[i].name);
//         printf("hp:%d\n",arr[i].hp);
//         printf("speed:%d\n",arr[i].speed);
//         printf("tier:%c\n",arr[i].tier);
//         printf("\n");
//     }
    
//     return 0;
// }

