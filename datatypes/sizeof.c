/* These are comments*/
#include<stdio.h>
#include<limits.h>

int main(){
 printf("size of char: %u bytes\n", sizeof(char));
 printf("size of integer: %u bytes\n", sizeof(int));
 printf("min size of signed char: %d\n", SCHAR_MIN);
 printf("max size of signed char: %d\n", SCHAR_MAX);
 return 0;   
}