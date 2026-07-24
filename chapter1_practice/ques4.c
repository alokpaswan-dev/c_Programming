// convert celcius to Fahrenheit 

#include <stdio.h>
int main(){
    float c;
    printf("temp in celcius : ");
    scanf("%f" , &c);

    float f = ((9.0 / 5.0)*c) + 32;
    printf("Temp in Fahrenheit = %.2f \n" ,f );

    



    return 0;
}