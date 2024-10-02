#include <stdio.h>
int main(){
    printf("welcome in sukhnam programs \n");
    printf("find area of circle\n");
    int a;
    printf("Enter diameter of circle\n");
    scanf("%d",&a);
    float pi=22/7;
    a=a/2;
    float c= pi*a*a;
    printf("%f",c);

//     int height=10;
//     float r=6;
//    int tvol=3.14*r*r*height;
//     printf("radius of circle is %f \nand area of circle is %f",r,3.14*r*r);
//     printf("\nvolume of cylinder is %d and height of cylinder is %d and \n radius of it is %f\n",tvol,height,r);

    return 0;
}