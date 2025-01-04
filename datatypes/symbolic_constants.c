#include<stdio.h>
#define PI 3.142568
#define MYCONSTANT (PI*PI)

int main(){
    int return_value_of_printf;
    return_value_of_printf = printf("Value of symbolic constant PI is: %f\n", PI);
    printf("return value of printf is: %d\n", return_value_of_printf);
    printf("Value of symbolic constant MYCONSTANT is: %f\n", MYCONSTANT);
}