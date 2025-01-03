#include<stdio.h>

int main(){
    unsigned long long int a = 4294967299;
    printf("value of a is and number of bytes required to save it : %d\n", sizeof(a));
    printf("value of a is : %llu\n", a);
    return 0;
}