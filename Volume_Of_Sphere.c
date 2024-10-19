#include<stdio.h>

int main()
{
    float radius = 8.74;
    float Volume_Of_Sphere;
    
    Volume_Of_Sphere = 4/3 * 3.14 * radius * radius * radius;
    
    printf("Program to Calculate Volume Of The Sphere : \n\n");
    printf("Valu_e of the given radius is : %.2f\n", radius);
    printf("The Calculated Volume Of The Sphere is : %.2f", Volume_Of_Sphere);
    
    return 0;
}
