/*let consider a class of car having some attributes */
/*but some car like racing cars having some extra attributes*/
#include<stdio.h>
#include<string.h>
struct car{
        int model_number;
        float engine;
        char name[100];
 }Maruti,jaquar,Tata,BMW;// Another way to initialise but in order

  struct racing_car{
  struct car jaquar; //We can replace jaquar by any words
  int Boosting_speed;
  //struct car details;// further changes also occur like details
};
int main(){
    //struct car Maruti;
    Maruti.model_number=2024;
    Maruti.engine=1.2;
    strcpy(Maruti.name,"Baleno");
    
    struct racing_car jaquar;
    jaquar.Boosting_speed = 300;
    jaquar.jaquar.model_number=2022;//nested structure
    jaquar.jaquar.engine=1;//nested structure
    strcpy(jaquar.jaquar.name,"F-pace");//nested structure

    // struct racing_car jaquar;
    // jaquar.Boosting_speed = 300;
    // jaquar.details.model_number=2022;//nested structure
    // jaquar.details.engine=1;//nested structure
    // strcpy(jaquar.details.name,"F-pace");//nested structure
    
    //struct car Tata;
    Tata.model_number=2023;
    Tata.engine=1.5;
    strcpy(Tata.name,"Nexon");

   // struct car BMW;
    BMW.model_number=2024;
    BMW.engine=3.0;
    strcpy(BMW.name,"X5");

    printf("Maruti\n");
    printf("%s\n",Maruti.name);
    printf("%.2f\n",Maruti.engine);
    printf("%d\n",Maruti.model_number);

    printf("\n");

    printf("jaquar\n");
    printf("%s\n",jaquar.jaquar.name);
    printf("%.2f\n",jaquar.jaquar.engine);
    printf("%d\n",jaquar.jaquar.model_number);
    printf("%d\n",jaquar.Boosting_speed);

    printf("\n");

    printf("Tata\n");
    printf("%s\n",Tata.name);
    printf("%.2f\n",Tata.engine);
    printf("%d\n",Tata.model_number);

    printf("\n");

     printf("BMW\n");
    printf("%s\n",BMW.name);
    printf("%.2f\n",BMW.engine);
    printf("%d\n",BMW.model_number);

return 0;
}