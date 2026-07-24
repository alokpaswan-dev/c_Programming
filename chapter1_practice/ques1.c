//area of rectangle using hard coded 

#include <stdio.h>

int main(){
    int length ;
    length = 5;
    
    int breadth ;
    breadth = 4;

    printf("area of triangle is %d" , length * breadth);

    return 0;
}

//area of rectangle using input supplied by user.

#include <stdio.h>

int main(){
    return 0;
    int length , breadth ;
    printf("enter length \n");
    scanf("%d" , &length);

    printf("enter breadth \n");
    scanf("%d" ,&breadth);

    printf("Area of triangle %d" , length * breadth);
}