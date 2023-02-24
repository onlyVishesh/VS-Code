#include <stdio.h>
int main(){

    const double Pi = 3.14159;
    double radius;
    double Circumference;
    double Area;
    printf("Please enter radius of circle here :    ");
    scanf("%lf",&radius);
    
    Circumference = 2*Pi*radius;
    printf("Circumference of circle is %lf",Circumference);
    Area = Pi*(radius*radius);
    printf("\nArea of circle is %lf",Area);
    
    


    return 0;

}