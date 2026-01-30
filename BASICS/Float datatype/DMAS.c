#include<stdio.h>
int main(){
    float a,b;//contains real values.
    a=5,b=6;
    printf("%.0f\n",a+b);
    printf("%.0f\n",a-b);
    printf("%.0f\n",a*b);
    printf("%.3f",a/b);
    return 0;
}

/*%.2f ya koi bhi digit ho decimal ke baad wo btata hai ki*/
/* decimal ke baad kitna digit tk answer ko end krna hai*/